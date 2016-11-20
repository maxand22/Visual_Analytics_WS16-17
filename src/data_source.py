import pandas

from tables import Table

class DataSource:

	# Constructor for DataSource
	def __init__(self):
		self.table_count = 0
		self.done = True
		# Tables: List of Calculated data
		self.tables = []
		# Initialize without data
		self.base_data = None 
		

	def readData(self, data, is_file_on_disk):
		# Read data into table

		# Set done to false since we start working
		self.done = False
		# Push data to class Table
		data = Table(data, is_file_on_disk)
		# Increase table count
		self.table_count+=1

		# if base data is None, it means we are reading for the first time
		if self.base_data is None:
			# Therefore, first data is set to be the base
			self.base_data = data
		else:
			# else: calculated data
			self.tables.append(data)

		# Reading data is done
		self.done = True
		return data
		
	def selection(self, attribute_name, operator, const1, const2 = None, write_table = True, data = None):
		# Filter data on row basis

		# If no data is explicitely passed use base data
		if data is None:
			data = self.base_data.df

		# Check which operator is used
		if operator == 'same':
			temp_data = data[data[attribute_name] == const1]

		elif operator == 'at_least':
			temp_data = data[data[attribute_name] >= const1]

		elif operator == 'less_than':
			temp_data = data[data[attribute_name] <= const1]

		elif operator == 'span':
			temp_data = data[(data[attribute_name] >= const1) & (data[attribute_name] <= const2)] 
		else:
			temp_data = None
			#error

		# Only write to table if wanted
		# Implemented to increase reusabilty of the code in the aggregation function
		if write_table:
			self.readData(temp_data, False)
		
		return temp_data

	def projection(self, column_name1, column_name2, data = None):
		# Filter data on column basis

		# If no data is explicitely passed use base data
		if data is None:
			data = self.base_data.df
		
		# Choose selected columns
		temp_data = data[[column_name1, column_name2]]

		# Write temp_data to table 
		self.readData(temp_data, False)

		return temp_data

	def aggregation(self, agg_function, attribute_names, range1 = None, range2 = None, data = None):
		# Aggregate data

		# If no data is explicitely passed use base data
		if data is None:
			data = self.base_data.df
		
		# If date range is given, filter data accordingly using the selection function
		if range1 is not None and range2 is not None:
			temp_data = self.selection('MasterTime', 'span', range1, range2, False, data)
		else:
			temp_data = data

		# Determin which type of aggregtion should be applied
		if agg_function == 'Min':
			temp_data= temp_data.loc[:,attribute_names].min().to_frame().transpose()
		elif agg_function == 'Max':
			temp_data= temp_data.loc[:,attribute_names].max().to_frame().transpose()
		elif agg_function == 'Avg':
			temp_data= temp_data.loc[:,attribute_names].mean().to_frame().transpose()
		else:
			pass
			#error

		# Write result to table
		self.readData(temp_data, False)
