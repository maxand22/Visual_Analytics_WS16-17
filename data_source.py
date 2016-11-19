import pandas

from tables import Table




class DataSource:

	def __init__(self):
		self.table_count = 0
		self.done = True
		self.tables = []

		self.base_data = None 
		
		

	def read_data(self, data, isBase):
		self.done = False
		
		data = Table(data, isBase)
		self.table_count+=1

		if isBase:
			self.base_data = data
		else:
			self.tables.append(data)
		self.done = True
		return data
		
	def selection(self,attributeName, operator, const1, const2 = None, writeTable = True):
		
		temp_data = None
		if operator == 'same':
			temp_data = self.base_data.df[self.base_data.df[attributeName] == const1]

		elif operator == 'at_least':
			temp_data = self.base_data.df[self.base_data.df[attributeName] >= const1]

		elif operator == 'less_than':
			temp_data = self.base_data.df[self.base_data.df[attributeName] <= const1]
		elif operator == 'span':
			temp_data = self.base_data.df[(self.base_data.df[attributeName] >= const1) & (self.base_data.df[attributeName] <= const2)] 
		else:
			pass
			#error
		if writeTable:
			self.read_data(temp_data, False)
		
		return temp_data

	def projection():
		pass

	def aggregation(self,aggFunction, attributeNames, range1 = None, range2 = None):

		if range1 is not None and range2 is not None:
			temp_data = self.selection('MasterTime', 'span', range1, range2, False)
			print temp_data
		else:
			temp_data = self.base_data.df
		if aggFunction == 'Min':
			temp_data= temp_data.loc[:,attributeNames].min().to_frame().transpose()
		elif aggFunction == 'Max':
			temp_data= temp_data.loc[:,attributeNames].max().to_frame().transpose()
		elif aggFunction == 'Avg':
			temp_data= temp_data.loc[:,attributeNames].mean().to_frame().transpose()
		else:
			pass
			#error
		self.read_data(temp_data, False)


ds = DataSource()
ds.read_data('dust-2014.dat', True)
#print(ds)
#print(ds.base_data.df)
#print(ds.base_data.attribute_names)
#print(ds.base_data.df.index)
#print(ds.base_data.df.dtypes)

#ds.selection('Small', 'at_least', 10000)
#ds.selection('Small', 'span', 0,1)

ds.aggregation('Avg', ['Small', 'Large'], '2014-12-03 21:32:00','2014-12-03 23:32:01')

#print(ds.table_count)
print(ds.tables[0].df)


