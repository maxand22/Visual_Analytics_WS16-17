class DataItr:

	def __init__(self, filename):
		self.table_count = 0
		self.done = True
		self.base_data = self.read_data(filename, True)
		#self.base_data = None
		self.tables = None