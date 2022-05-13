# Prints all titles in CSV using csv.DictReader
import csv

# opening file
with open("favorites.csv", "r") as file:
    # reading as dictionary
    reader = csv.DictReader(file)
    # iterating thru reader
    for row in reader:
        # printing every row by its title. With a dictionary, we can print by name of column
        print(row["title"])