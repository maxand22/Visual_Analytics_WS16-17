import pandas

from tables import Table


class DataSource:

	def __init__(self, filename):
		self.table_count = 0
		self.done = True
		self.base_data = self.read_data(filename, True)
		#self.base_data = None
		self.tables = None
		

	def read_data(self,filename, isBase):
		#elf.done = False
		
		data = Table(filename, True)
		#self.done = True
		return data
		



ds = DataSource('dust-2014.dat')
print(ds)
print(ds.base_data)
print(ds.base_data.df)