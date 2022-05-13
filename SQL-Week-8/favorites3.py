# printing unique titles from csv and striping and uppercasing every title
import csv

# initial empty list as we are only adding values and printing. Key and value association not needed
titles = []

# open csv file. This method automatically closes file when not in use
with open("favorites.csv", "r") as file:
    # reading csv file
    reader = csv.DictReader(file)
    # iterating thru reader
    for row in reader:
        # set value for every row's title and stripping empty spaces and uppercasing
        title = row["title"].strip().upper()
        # using conditional to add a title only if it is not already in list titles
        if not title in titles:
            titles.append(title)
    
    # printing list
    # print(titles)
    # printing every item in list
    for title in titles:
        print(title)