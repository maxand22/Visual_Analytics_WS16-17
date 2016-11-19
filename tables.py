import pandas
from data_store import DataStore

class Table(DataStore):


	def __init__(self, data, isBase):

		if isBase:
			dtypes = {'MasterTime': 'str', 'Small': 'float', 'Large': 'float', 'OutdoorTemp': 'float', 'RelHumidity': 'float'}
			parse_dates = ['MasterTime']
			self.df = pandas.read_csv(data,sep =';', header = 0, dtype=dtypes, parse_dates=parse_dates)
		else:
			self.df = data
			#TODO

		#pass data_count to parent
		#TODO: data_itr?!
		DataStore.__init__(self, len(self.df.axes[0]), None)

		#store number of columns & names
		self.attribute_count = len(self.df.axes[1])
		self.attribute_names = list(self.df.columns.values)

	def getDataCount():
		return self.df.data_count

	def getAttributeCount():
		return self.df.attribute_count

	def getAttributeNames():
		return self.df.attribute_names