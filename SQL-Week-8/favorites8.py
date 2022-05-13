# counting all the occurences of an specific title
# imput comes from csv file, looping thru every row "title" 
# output will be an int originated from counting using an if statement

import csv

# opening csv
with open("favorites.csv", "r") as file:
    # reading csv
    reader = csv.DictReader(file)
    # initial value of counter
    counter = 0
    # loopint thru every row in reader
    for row in reader:
        # grabbing every title
        title = row["title"].strip().upper()
        # using conditional statements to increase counter if example: THE OFFICE exists in reader
        if title == "THE OFFICE":
            # as loops continue, increase counter by 1 if statement is met
            counter = counter + 1
        
    # printing
    print(f"the office: {counter}")