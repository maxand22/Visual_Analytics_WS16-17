import pandas

from tables import Table




class DataSource:

	def __init__(self, filename):
		self.table_count = 0
		self.done = True
		self.base_data = self.read_data(filename, True)
		self.tables = []
		

	def read_data(data, isBase):
		self.done = False
		
		data = Table(data, isBase)
		self.table_count++
		tables.append(data)
		self.done = True
		return data
		
	def selection(attributeName, operator, const1, const2 = None):
		
		if operator = 'same':

		else



		

	def projection():
		pass

	def aggregation():
		pass


ds = DataSource('dust-2014.dat')
#print(ds)
#print(ds.base_data)
print(ds.base_data.data_count)


table2 = projection(ds.base_data[1,2])


ds.read_data(table2, False)
