# Prints all titles in CSV using csv.reader
import csv

# open csv file
with open ("favorites.csv", "r") as file:
    # reading file
    reader = csv.reader(file)
    # next() above for 'for row in reader' so we first skip and then print every row
    next(reader)
    # iterating over reader
    for row in reader:
        # printing every row's index 1 column (second column)
        print(row[1])