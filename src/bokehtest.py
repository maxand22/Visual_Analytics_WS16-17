import sys	
sys.path.append('/usr/local/lib/python2.7/site-packages')
import numpy as np
from data_source import DataSource



from bokeh.plotting import figure, show, output_file, output_server, curdoc
from random import shuffle
from bokeh.layouts import column
from bokeh.models import Button



# create a callback that will add a number in a random location
def callback():
    global i

    # BEST PRACTICE --- update .data in one step with a new dict
    new_data = dict()
    new_data['x'] = ds.data['x'] + [random()*70 + 15]
    new_data['y'] = ds.data['y'] + [random()*70 + 15]
    new_data['text_color'] = ds.data['text_color'] + [RdYlBu3[i%3]]
    new_data['text'] = ds.data['text'] + [str(i)]
    ds.data = new_data

    i = i + 1


# Create new DataSource
ds = DataSource()

# Read Dustdata from disc
ds.readData('data/100.csv', True)
ds.projection(ds.base_data.attribute_names[1], ds.base_data.attribute_names[2])

df = ds.tables[0].df


N = ds.tables[0].df
x = df.ix[:,0]
y = df.ix[:,1]


#TOOLS="hover,crosshair,pan,wheel_zoom,zoom_in,zoom_out,box_zoom,undo,redo,reset,tap,save,box_select,poly_select,lasso_select,"

TOOLS="hover,pan,wheel_zoom,zoom_in,zoom_out,box_zoom,undo,redo,reset,tap,save,box_select"

p = figure(tools=TOOLS)

p.scatter(x, y, fill_alpha=0.6,
          line_color=None)
p.xaxis[0].axis_label = ds.base_data.attribute_names[1]
p.yaxis[0].axis_label = ds.base_data.attribute_names[2]

#output_file("color_scatter.html", title="color_scatter.py example")



# add a button widget and configure with the call back
button = Button(label="Press Me")
button.on_click(callback)

# put the button and plot in a layout and add to the document
curdoc().add_root(column(button, p))

show(p)  # open a browser