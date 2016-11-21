from data_source import DataSource
import datetimeOp

# Create new DataSource
ds = DataSource()

# Read Dustdata from disc
ds.readData('data/dust-2014.dat', True)

# Print type data structure
print 'Datatyp:', type(ds.base_data.df)	
# Print amount of data
print '#Data:', ds.base_data.data_count
# Print amount of columns
print '#Columns:', ds.base_data.attribute_count
# Print column names
print 'Column Names:', ds.base_data.attribute_names
# Print top 10 rows
print ds.base_data.df.head(10)

# Execute Selection
ds.selection('Small', 'span', 0,10000)
print '###Selection: Small between 0 and 10000'
# Print type data structure
print 'Datatyp:', type(ds.tables[0].df)	
# Print amount of data -> less than before
print '#Data:', ds.tables[0].data_count
# Print amount of columns -> same
print '#Columns:', ds.tables[0].attribute_count
# Print column names -> same
print 'Column Names:', ds.tables[0].attribute_names
# Print top 10 rows
print ds.tables[0].df.head(10)

ds.projection('Small', 'Large')
print '###Projection: Small & Large'
# Print type data structure
print 'Datatyp:', type(ds.tables[1].df)
# Print amount of data	-> same
print '#Data:', ds.tables[1].data_count
# Print amount of columns -> less than before
print '#Columns:', ds.tables[1].attribute_count
# Print column names -> less than before
print 'Column Names:', ds.tables[1].attribute_names
# Print top 10 rows
print ds.tables[1].df.head(10)

ds.aggregation('max', ['OutdoorTemp', 'RelHumidity'], datetime.datetime(2014, 01, 01, 0,0,0), datetime.datetime(2014, 01, 31, 23,59,59) )
print '###Aggregation: Max of OutdoorTemp and RelHumidity in January 2014'
# Print type data structure
print 'Datatyp:', type(ds.tables[2].df)	
# Print amount of data -> less than before
print '#Data:', ds.tables[2].data_count
# Print amount of columns -> less than before
print '#Columns:', ds.tables[2].attribute_count
# Print column names -> less than before
print 'Column Names:', ds.tables[2].attribute_names
# Print top 10 rows
print ds.tables[2].df.head(10)