###Benchmark Script###

from data_source import DataSource
import datetime
from datetime import timedelta
from random import uniform
from random import randint
import random
import numpy as np
import pandas as pd
import sys
import csv
import os

def randomDate(start, end):
	# Helper function to generate a random date in the specified daterange
	return start + timedelta(seconds=randint(0, int((end - start).total_seconds())))

# not needed
# def createTestDataOnFly(testcases):
# 	# Create dataframe for test purposes
# 	print 'start datageneration'

# 	# Define columns of dataframe
# 	df = pd.DataFrame(columns=('MasterTime', 'Small', 'Large', 'RelHumidity', 'OutdoorTemp'))
# 	for i in range(0,testcases): 
# 		# Generate random values for each column
# 	    master_time = randomDate(datetime.datetime(2010, 01, 01, 0,0,0),datetime.datetime(2016, 12, 31, 0,0,0))
# 	    small = randrange(0,100000)
# 	    large = randrange(0,100000)
# 	    rel_humidity = uniform(0.0, 100.0)
# 	    outdoor_temp = uniform(-50., 100.0)
# 	    # Write value to df
# 	    df.loc[i] = [master_time,small,large, rel_humidity, outdoor_temp]

# 	print 'finish datageneration'
# 	return df


def createTestCsv(testcases):
	# Create CSV file for test purpose

	#Remove file with same amount of test data if existing
	try:
		os.remove('data/' + str(testcases) + '.csv')
	except OSError:
		pass
	

	starttime = datetime.datetime.now()

	# Prepare CSV writer
	writer_prep = open('data/' + str(testcases) + '.csv', 'a')
	writer = csv.writer(writer_prep,delimiter =';')

	#Write header of CSV file
	writer.writerow(['MasterTime', 'Small', 'Large', 'RelHumidity', 'OutdoorTemp'])
	for i in range(0,testcases): 
		# Generate random values for each column
		master_time = randomDate(datetime.datetime(2010, 01, 01, 0,0,0),datetime.datetime(2010, 03, 31, 0,0,0))
		small = randint(0,100000)
		large = randint(0,100000)
		rel_humidity = uniform(0.0, 100.0)
		outdoor_temp = uniform(-50., 100.0)
		# Write random values to CSV
		writer.writerow([master_time,small,large, rel_humidity, outdoor_temp])   

	endtime = datetime.datetime.now()
	# Print Reading Time
	print 'Data Generation time:', (endtime - starttime).total_seconds()

def calculateComputingTimes(ds, test_type):
	# Function to calculate computation times of testset for selection, projection & aggregation
	running_times = []
	for  i in range(10):
		# Specified 10 testruns for each dataset & function
		
		
		if test_type == 'selection':
			#Testing selection

			#choosing random attribute
			testing_attribute_num = randint(0, ds.base_data.attribute_count-1)
			testing_attribute = ds.base_data.attribute_names [testing_attribute_num]

			if testing_attribute_num == 0:
				minimum_value = randomDate(datetime.datetime(2010, 01, 01, 0,0,0),datetime.datetime(2016, 12, 31, 0,0,0))
				maximum_value = randomDate(minimum_value,datetime.datetime(2016, 12, 31, 0,0,0))
			elif testing_attribute_num < 3:
				minimum_value = randint(0,100000)
				maximum_value = randint(minimum_value,100000)
			else:
				minimum_value = uniform(0.0, 100.0)
				maximum_value = uniform(minimum_value, 100.0)

			# choosing random type of selection
			testing_operation_num = randint(0,3)
			if testing_operation_num == 0:
				testing_operation = 'same'
			elif testing_operation_num == 1:
				testing_operation = 'at_least'
			elif testing_operation_num == 2:
				testing_operation = 'less_than'				
			elif testing_operation_num == 3:
				testing_operation = 'span'

			starttime = datetime.datetime.now()
			ds.selection(testing_attribute, testing_operation, minimum_value,maximum_value)
		elif test_type =='projection':
			# Testing projection 

			# Choosing two random attribute
			testing_attribute_num1 = randint(0, ds.base_data.attribute_count-1)
			testing_attribute_num2 = randint(0, ds.base_data.attribute_count-1)

			# Making sure the numbers differ
			while testing_attribute_num1 == testing_attribute_num2:
				testing_attribute_num2 = randint(0, ds.base_data.attribute_count-1)

			starttime = datetime.datetime.now()
			ds.projection(ds.base_data.attribute_names[testing_attribute_num1], ds.base_data.attribute_names[testing_attribute_num2])
		elif test_type == 'aggregation':
			# Testing aggregation

			# choosing random type of aggregation
			testing_operation_num = randint(0,2)
			if testing_operation_num == 0:
				testing_operation = 'max'
			elif testing_operation_num == 1:
				testing_operation = 'min'
			elif testing_operation_num == 2:
				testing_operation = 'avg'	

			# Choosing two random attribute
			testing_attribute_num1 = randint(0, ds.base_data.attribute_count-1)
			testing_attribute_num2 = randint(0, ds.base_data.attribute_count-1)

			# Making sure the numbers differ
			while testing_attribute_num1 == testing_attribute_num2:
				testing_attribute_num2 = randint(0, ds.base_data.attribute_count-1)		

			# Choosing time span
			minimum_value = randomDate(datetime.datetime(2010, 01, 01, 0,0,0),datetime.datetime(2016, 12, 31, 0,0,0))
			maximum_value = randomDate(minimum_value,datetime.datetime(2016, 12, 31, 0,0,0))						

			starttime = datetime.datetime.now()
			ds.aggregation(testing_operation, [testing_attribute_num1, testing_attribute_num2], minimum_value, maximum_value)

		endtime = datetime.datetime.now()

		running_times.append((endtime - starttime).total_seconds())

	# Output of average running time of testset
	print "Testcases:", ds.base_data.data_count,"- Type:", test_type, "- Avg. Time:", np.mean(running_times)

def profile(testcases, force_new_file = False):
	# Main Testfunction: Defining testcases and getting the data together
	print '##### Start', testcases
	# Initialize DataSource
	ds = DataSource()

	# If test file does not exist or user forces to create new testdata
	if not os.path.isfile('data/' + str(testcases) + '.csv') or force_new_file == True:
		createTestCsv(testcases)

	starttime = datetime.datetime.now()
	# Read testdata from CSV
	ds.readData('data/' + str(testcases) + '.csv', True)
	endtime = datetime.datetime.now()
	# Print Reading Time
	print 'Read time:', (endtime - starttime).total_seconds()

	# Pass testdata to computing function
	calculateComputingTimes(ds,'selection')
	calculateComputingTimes(ds,'projection')
	calculateComputingTimes(ds,'aggregation')

	#print '###### Finish', testcases

#profile(10000, force_new_file = False)
#profile(100000, force_new_file = False)
#profile(1000000, force_new_file = False) 
#profile(10000000, force_new_file = False)
#profile(100000000, force_new_file = False)

createTestCsv(1000);


