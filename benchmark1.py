###Benchmark Script###

from data_source import DataSource
import datetime
from random import randrange
from random import uniform
import random
import numpy as np
import pandas as pd
import sys


testcases = 10000

dt = datetime.datetime(2010, 12, 01, 0,0,0)
step = datetime.timedelta(seconds=5)

#df = pd.DataFrame(np.nan, index = ['MasterTime', 'Small', 'Large', 'RelHumidity', 'OutdoorTemp'])
df = pd.DataFrame()

print 'start datageneration'
for num in range(0,testcases): 
    masterTime = dt.strftime('%Y-%m-%d %H:%M:%S')
    dt += step
    small = randrange(0,100000)
    large = randrange(0,100000)
    relHumidity = uniform(0.0, 100.0)
    outdoorTemp = uniform(-50., 100.0)
    df2 = pd.DataFrame([[masterTime,small,large, relHumidity, outdoorTemp]])
    df = df.append(df2)

print df.columns.values
sys.exit()
print 'finish datageneration'
starttime = datetime.datetime.now()

ds = DataSource()
ds.read_data(df, False)
ds.selection('Small', 'span', 0,1)

endtime = datetime.datetime.now()
print "Time:", endtime - starttime

print ds.base_data.df

