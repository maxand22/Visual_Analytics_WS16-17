#import sys   
#sys.path.append('/usr/local/lib/python2.7/site-packages')
import numpy as np
from data_source import DataSource
import pandas as pd

from datetime import date
from datetime import datetime

from random import random

from bokeh.layouts import column, row, widgetbox, layout
from bokeh.models import Button, CheckboxButtonGroup, DatetimeTickFormatter, NumeralTickFormatter, ColumnDataSource, HoverTool, HBox, WidgetBox, Label
from bokeh.palettes import RdYlBu3
from bokeh.plotting import figure, curdoc
from bokeh.models.widgets import DateRangeSlider, DatePicker, Div




# create a callback that will add a number in a random location
def chooseVariables(ticked):
    global ds
    global dss
    global dss2
    global p2
    global p
    global source
    global current
    global previous
    global plotLayout
    global current_plot_num
 
    previous = current
    current = ticked   

    if len(ticked) > 2:

        diff = list(set(current) - set(previous))
        
        checkbox_button_group.active = diff


    if len(checkbox_button_group.active) == 2:

        if current[0] == 0:
           p.xaxis.formatter=DatetimeTickFormatter()
           pass
        else:
           p.xaxis.formatter=NumeralTickFormatter() 
           pass



        p.yaxis.formatter=NumeralTickFormatter() 

        ds.projection(ds.base_data.attribute_names[current[0]], ds.base_data.attribute_names[current[1]])
        current_plot_num = current_plot_num +1
        df = ds.tables[ds.table_count-1].df
        #print len(df.index)
        #print df.ix[:,1]

        render_plots()

       
        


def render_plots(num_of_plot = 1):
    global df
    global ds
    global dss
    global dss2
    global p
    global plot_num

    df = ds.tables[ds.table_count - num_of_plot].df

    l = [1] *  len(df.index)


    helper = df.ix[:,2]
    
    upper = helper.astype('str') 

    
    source = ColumnDataSource(data=dict(x=df.ix[:,0], y=df.ix[:,1],z=upper, w= l ))

    #print source.data
    dss.data = source.data
    #p.circle('x', 'y', size=5, source=source)
    #p2.square(datetime.strptime('z', "%Y-%m-%d %H:%M:%S"), 'w', size=5, source=source)


    lower = list(set(helper.apply(lambda x: x.date())))

    lower = sorted(lower)

    
    
    source2 = ColumnDataSource(data=dict(x=lower, y= l ))
    dss2.data = source2.data

    

    attr1 = ds.base_data.attribute_names[current[0]]
    attr2 = ds.base_data.attribute_names[current[1]]

    p.xaxis[0].axis_label = attr1
    p.yaxis[0].axis_label = attr2

    hover = HoverTool(
            tooltips=[
                (attr1, "@x"),
                (attr2, "@y"),
                ("TimeStamp", "@z")
                #("TimeStamp", datetime.fromtimestamp(float("@z"))),
            ]
    )

    p.add_tools(hover)

def date_filter():
    global picker2
    global picker
    global ds
    global current_plot_num 

    ds.selection('MasterTime', 'span', const1= np.datetime64(datetime.strptime(str(picker.value) , '%Y-%m-%d')), const2 = np.datetime64(datetime.strptime(str(picker2.value) , '%Y-%m-%d')), write_table = True, data = ds.tables[ds.table_last_aggregation].df)
    current_plot_num = current_plot_num +1
    render_plots()

def go_back():
    global current_plot_num 
    global ds

    current_plot_num = current_plot_num -1
    if current_plot_num < 1:
        current_plot_num = 1
    render_plots(ds.table_count - current_plot_num + 1)
    


def go_forward():
    global current_plot_num 
    global ds

    current_plot_num = current_plot_num + 1
    if current_plot_num > ds.table_count:
        current_plot_num = ds.table_count
    render_plots(ds.table_count - current_plot_num + 1)

def on_selection_change(attr, old, new):
    global dss2
    global dss
    global p 
    global div

    print type(dss)

    #dss2.selected['1d']['indices'] = [82]

    selection =  dss.to_df()
    
    if new['1d']['indices'] == []:
        dss2.selected['1d'] = new['1d']
    else:
        #selection = selection[selection.index.isin(new['1d']['indices'])]
        helper = pd.DataFrame(dss.data['z'])
        helper.columns = ['x']
        
        helper = helper[helper.index.isin(new['1d']['indices'])]
        helper['x'] = pd.to_datetime(helper['x'], format='%Y-%m-%d %H:%M:%S')
        
        helper['x'] = helper['x'].apply(lambda x: x.date())
        helper['x'] = helper['x'].apply(lambda x: int(x.strftime("%s")) * 1000 )


        helper2 = pd.DataFrame(dss2.data['x'])
        helper2.columns = ['x']

        
        new['1d']['indices'] = helper2[helper2['x'].isin(helper['x'])].index
        dss2.selected['1d'] = new['1d']
        
    
    #print(dss2.data['x'].index())
    min1 = selection.ix[:,1].min()
    min2 = selection.ix[:,0].min()
    max1 = selection.ix[:,1].max()
    max2 = selection.ix[:,0].max()

    div.text = "Count: " + str(len(selection)) + "<br>" + "X-Min: " + str(min1) + "<br>" + "X-Max: " + str(max1) + "<br>" + "Y-Min: " + str(min2) + "<br>" + "Y-Max: " + str(max2) 


# Create new DataSource
ds = DataSource()

# Read Dustdata from disc
#ds.readData('dust-2014.dat', True)

ds.readData('1000.csv', True)

#ds.projection(ds.base_data.attribute_names[1], ds.base_data.attribute_names[2])
#ds.projection(ds.base_data.attribute_names[3], ds.base_data.attribute_names[4])


#TOOLS="hover,crosshair,pan,wheel_zoom,zoom_in,zoom_out,box_zoom,undo,redo,reset,tap,save,box_select,poly_select,lasso_select,"


min_date = ds.aggregation('Min', ['MasterTime'], write_table = False)['MasterTime'].iloc[0]
max_date = ds.aggregation('Max', ['MasterTime'], write_table = False)['MasterTime'].iloc[0]

picker = DatePicker(max_date=max_date, min_date=min_date, value=min_date)
picker2 = DatePicker(max_date=max_date, min_date=min_date, value=max_date)


TOOLS="pan,wheel_zoom,zoom_in,zoom_out,box_zoom,undo,redo,reset,tap,save, box_select"




p = figure(tools=TOOLS, name = "Plot")




r = p.scatter(x = [], y = [], fill_alpha=0.6,line_color=None)
dss = r.data_source


current = None
source = None
previous = None
plot_num = 0
current_plot_num = 0

p2 = figure(tools="tap", name = "Plot", x_axis_type="datetime", height=100)
p2.yaxis.axis_line_width = 1
p2.yaxis.axis_line_color = "white"
p2.yaxis.axis_label_text_color = "#FFFFFF"
p2.yaxis.major_label_text_font_size = '0pt' 
p2.yaxis.major_tick_line_color = None  # turn off major ticks 
p2.yaxis.minor_tick_line_color = None  # turn off major ticks 

r2 = p2.scatter(x = [], y = [], fill_alpha=0.6,line_color=None)
dss2 = r2.data_source


checkbox_button_group = CheckboxButtonGroup(
        labels=ds.base_data.attribute_names, active=[1,2], width=500 )
checkbox_button_group.on_click(chooseVariables)


button = Button(label="Apply Date Filter", button_type="success")
button.on_click(date_filter)

button_back = Button(label="Back", button_type="success")
button_back.on_click(go_back)

button_next = Button(label="Next", button_type="success")
button_next.on_click(go_forward)


dss.on_change('selected', on_selection_change)


div = Div(text="",width=200, height=100)


h = layout([
    [checkbox_button_group],
    [picker, picker2],
    [button],
    [div],
    [button_back, button_next]


    ], sizing_mode='fixed')

l = layout([
  [p, h],
  [p2],
], sizing_mode='fixed')

curdoc().add_root(l)



checkbox_button_group.active
chooseVariables([1,2])







