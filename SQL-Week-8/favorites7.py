# Prints popularity of titles in CSV, sorted by popularity, using a lambda function

import csv

# For accumulating (and later sorting) titles
titles = {}

# Open CSV file
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader = csv.DictReader(file)
    # Iterate over CSV file
    for row in reader:
        # Canoncalize title
        title = row["title"].strip().upper()
        # Update counter
        if title in titles:
            titles[title] += 1
        else:
            titles[title] = 1

# printing sorted using lambda key which gives title the value of titles[title] (aka as the value of each title key)
for title in sorted(titles, key=lambda title: titles[title], reverse=True):
    print(title, titles[title])


# More on lambda:
# We can write and pass in a lambda, or anonymous function, which has no name but takes in some argument or arguments, and returns a value immediately.
# Notice that there are no parentheses or return keyword, but concisely has the same effect as our get_value function earlier.