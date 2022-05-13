# Prints unique titles in CSV, case insensitively and using a set
# In Python, a set adds unique values so no need to use conditionals to add

import csv

# initial empty set
titles = set()

# opening csv file
with open("favorites.csv", "r") as file:
    # reading csv file as dictionary
    reader = csv.DictReader(file)
    # iterating thru every row in reader
    for row in reader:
        # title holds value in every row in title column
        title = row["title"].upper().strip()
        # sending each title to titles set
        # The set add() method adds a given element to a set if the element is not present in the set.
        titles.add(title)
    # printing every item in titles set in sorted alpha order
    for title in sorted(titles):
        print(title)