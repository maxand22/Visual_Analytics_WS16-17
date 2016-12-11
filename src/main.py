import sys  
sys.path.append('/usr/local/lib/python2.7/site-packages')
import numpy as np
from data_source import DataSource
import pandas as pd
# myapp.py

from random import random

from bokeh.layouts import column
from bokeh.models import Button, CheckboxButtonGroup
from bokeh.palettes import RdYlBu3
from bokeh.plotting import figure, curdoc







# Create new DataSource
ds = DataSource()

# Read Dustdata from disc
ds.readData('100.csv', True)
#ds.projection(ds.base_data.attribute_names[1], ds.base_data.attribute_names[2])
#ds.projection(ds.base_data.attribute_names[3], ds.base_data.attribute_names[4])



#TOOLS="hover,crosshair,pan,wheel_zoom,zoom_in,zoom_out,box_zoom,undo,redo,reset,tap,save,box_select,poly_select,lasso_select,"

TOOLS="hover,pan,wheel_zoom,zoom_in,zoom_out,box_zoom,undo,redo,reset,tap,save,box_select"


current = None
previous = None




# create a callback that will add a number in a random location
def chooseVariables(ticked):
    global ds
    global dss
    global p
    global current
    global previous
    print ticked

    previous = current
    current = ticked
    

    if len(ticked) > 2:

        diff = list(set(current) - set(previous))
        
        checkbox_button_group.active = diff


    if len(checkbox_button_group.active) == 2:
        curdoc().get_model_by_name('plot2')
        if current[0] == 0 or current[1] == 0:
            p = figure(tools=TOOLS, x_axis_type="datetime", name = "abc")
        else:
            p = figure(tools=TOOLS)

        r = p.scatter(x = [], y = [], fill_alpha=0.6,line_color=None)
        dss = r.data_source

        ds.projection(ds.base_data.attribute_names[current[0]], ds.base_data.attribute_names[current[1]])
        df = ds.tables[ds.table_count-1].df
        dss.data = dict(x=df.ix[:,0], y=df.ix[:,1])
        p.xaxis[0].axis_label = ds.base_data.attribute_names[current[0]]
        p.yaxis[0].axis_label = ds.base_data.attribute_names[current[1]]
        curdoc().add_root(p)





checkbox_button_group = CheckboxButtonGroup(
        labels=ds.base_data.attribute_names )
checkbox_button_group.on_click(chooseVariables)

# add a button widget and configure with the call back
button = Button(label="Press Me")
#button.on_click(callback)

# put the button and plot in a layout and add to the document

curdoc().add_root(checkbox_button_group)
