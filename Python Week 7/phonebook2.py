# Saves names and numbers to a CSV file
# Python also has a csv library that helps us work with CSV files

import csv
from cs50 import get_string

# Open CSV file
file = open("phonebook.csv", "a")

# Get name and number
name = get_string("Name: ")
number = get_string("Number: ")

# Print to file in next two lines
# call csv.writer to create a writer object from the file
writer = csv.writer(file)
# we can use a method inside it, writer.writerow, to write a list as a row.
writer.writerow([name, number])

# Close file
file.close()