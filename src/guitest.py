import numpy as np
import sys	
sys.path.append('/usr/local/lib/python2.7/site-packages')


from data_source import DataSource

import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import mpld3
from mpld3 import plugins


# Create new DataSource
ds = DataSource()

# Read Dustdata from disc
ds.readData('data/dust-2014.dat', True)
ds.projection(ds.base_data.attribute_names[1], ds.base_data.attribute_names[2])

df = ds.tables[0].df


N = ds.tables[0].df
x = df.ix[:,0]
y = df.ix[:,1]



#plt.scatter(x, y, alpha=0.5)
#plt.show()


#sys.exit()

# plot line + confidence interval
fig, ax = plt.subplots()
ax.grid(True, alpha=0.3)




N = ds.tables[0].df

scatter = ax.scatter(df.ix[:,0],df.ix[:,1])


# ax.scatter(np.random.normal(size=N),
#                      np.random.normal(size=N),
#                      c=np.random.random(size=N),
#                      s=1000 * np.random.random(size=N),
#                      alpha=0.3,
#                      cmap=plt.cm.jet)

# define interactive legend

handles, labels = ax.get_legend_handles_labels() # return lines and labels
interactive_legend = plugins.InteractiveLegendPlugin(zip(handles,
                                                         ax.collections),
                                                     labels,
                                                     alpha_unsel=0.5,
                                                     alpha_over=1.5, 
                                                     start_visible=True)
plugins.connect(fig, interactive_legend)

ax.set_xlabel('x')
ax.set_ylabel('y')
ax.set_title('Interactive legend', size=20)

mpld3.show()