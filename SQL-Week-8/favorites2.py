# Prints unique titles in CSV, case sensitively
import csv 

# initial empty list
titles = []

# opening csv file
with open("favorites.csv", "r") as file:
    # reading csv file as dictionary
    reader = csv.DictReader(file)
    # iterating thru every row in csv
    for row in reader:
        # for every row in csv, title takes value of what's in column title
        title = row["title"]
        # if one of those title is not in titles list ..
        if not title in titles:
            # append titles list with value from title
            titles.append(title)
    # printing full list
    # print(titles)
    # priting every item in list
    for title in titles:
        print(title)