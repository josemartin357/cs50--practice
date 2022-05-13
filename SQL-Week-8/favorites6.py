# function iterates thru csv file and outputs the number of times a title is in the csv doc
# building up from favorites5.py
import csv

from sqlalchemy import true

# initial empty dictionary
titles = {}

# opening file
with open("favorites.csv", "r") as file:
    # reading csv as dictionary
    reader = csv.DictReader(file)
    # iteating thru every row in reader
    for row in reader:
        # grabbing every title
        title = row["title"].upper().strip()
        # adding and counting every title in titles dictionary. reference favorites5.py for more notes
        if title in titles:
            titles[title] = titles[title] + 1
        else:
            titles[title] = 1
        # titles[title] is the value of each title in titles dictionary
        # title is every key in titles dictionary
        # titles is the whole dictionary with each key and value

# using function to get a value from title
def get_value(title):
    return titles[title]
    

# printing and using value returned from get_value to sort
# reverse=True reverses order
for title in sorted(titles, key=get_value, reverse=True):
    print(title, titles[title])