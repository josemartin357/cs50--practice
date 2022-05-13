# program to ask the user for a particular title and report its popularity
import csv

# asking user input
title_searched = input("Title of show: ").strip().upper()

# initial value of counter
counter = 0

# opening csv
with open("favorites.csv", "r") as file:
    # reading csv
    reader = csv.DictReader(file)
    # looping thru reader
    for row in reader:
        # grabbing every row title in csv and removing white space and uppercasing
        title_db = row["title"].strip().upper()
        # comparing user input with titles in csv
        if title_searched == title_db:
            # as we loop, counter + 1 if match
            counter = counter + 1
    
    # printing
    print(f"Number of times of {title_searched} in list is {counter} times")


