import sys  
sys.path.append('/usr/Library/Python/2.7/site-packages')
import numpy as np
from data_source import DataSource
import pandas as pd
# myapp.py
from random import random
from bokeh.layouts import column
from bokeh.models import Button, CheckboxButtonGroup
from bokeh.palettes import RdYlBu3
from bokeh.plotting import figure, curdoc


ds = DataSource()

# Read Dustdata from disc
ds.readData('100.csv', True)
dss = ds.base_data.df
hist = np.histogram(dss[:,0])
print 


show(hist)