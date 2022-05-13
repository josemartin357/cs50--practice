# counting times a title is mentioned in csv file
# in this case, we use a conditional saying if "word" in X

import csv

# initial value of 0
counter = 0

# opening csv
with open("favorites.csv", "r") as file:
    # reading csv as dictionary
    reader = csv.DictReader(file)
    # looping thru every row
    for row in reader:
        # grabbing title and simplifying it
        title = row["title"].upper().strip()
        # if "word" is in one title ...
        if "OFFICE" in title:
            # add 1 to counter as loops continue
            counter = counter + 1
    
    #printing
    print(f"The Office appears this many times in list: {counter}")