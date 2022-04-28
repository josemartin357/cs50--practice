# Saves names and numbers to a CSV file
# We can improve our program by reading each row as a dictionary, using the first row in the file as the keys for each value:
import csv
from cs50 import get_string

# Get name and number
name = get_string("Name: ")
number = get_string("Number: ")

# Open CSV file
with open("phonebook.csv", "a") as file:

    # Print to file
    writer = csv.writer(file)
    # Now, we can say house = row["House"] to get the value in that column.
    writer.writerow([name, number])