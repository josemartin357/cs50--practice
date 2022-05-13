# counting the number of times we see each title
# in this function, the titles are the keys and the values the number of times each title is in this dictionary
# we need a dictionary because we need a key and value relation

import csv

# initial empty dictionary
titles = {}

# open csv file
with open("favorites.csv", "r") as file:
    # reading file
    reader = csv.DictReader(file)
    # iterating in every row in reader
    for row in reader:
        # accessing every row's title in reader
        title = row["title"].strip().upper()
        # if the title is in dictionary ...
        if title in titles:
            # increase the value of that title in titles dictionary by 1
            titles[title] = titles[title] + 1
        else:
            # else add the title to titles dictionary and give it the value of 1
            titles[title] = 1

    # titles[title] is the value of each title in titles dictionary
    # title is every key in titles dictionary
    # titles is the whole dictionary with each key and value
    for title in sorted(titles):
        print(title, titles[title])




