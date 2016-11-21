import pandas
#from data_store import DataStore

class Table():

	# Constructor for Table
	def __init__(self, data, isFileOnDisk):

		if isFileOnDisk:
			# if: data is loaded from file from disc
			# define type of columns
			# Small & Large need to be float since python int cannot handle NAs
			dtypes = {'MasterTime': 'str', 'Small': 'float', 'Large': 'float', 'OutdoorTemp': 'float', 'RelHumidity': 'float'}
			
			# read_csv cannot directly parse datetimes
			# therefore needs to be specified
			parse_dates = ['MasterTime']
			self.df = pandas.read_csv(data,sep =';', header = 0, dtype=dtypes, parse_dates=parse_dates)
		else:
			# else: data is loaded from dataframe
			self.df = data

		# store amount of data, number of columns & names
		self.data_count = len(self.df.axes[0])
		self.attribute_count = len(self.df.axes[1])
		self.attribute_names = list(self.df.columns.values)