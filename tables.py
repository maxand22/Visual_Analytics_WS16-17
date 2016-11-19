import pandas
from data_store import DataStore

class Table(DataStore):


	def __init__(self, filename, isBase):

		if isBase:
			self.df = pandas.read_csv(filename,sep =';', header = 0)
		else:
			pass
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