# program prints all the rows that match a search
import csv
from cs50 import SQL

# defining database access
db = SQL("sqlite:///favorites.db")

# requesting user input
title = input("Name of show: ")

# defining query to print searched titles
query = db.execute("SELECT title FROM favorites WHERE title LIKE ?", "%" + title + "%")
# query prints [{'title': 'Office'}, {'title': 'Office'}, {'title': 'The Office'}, {'title': 'The Office'}, {'title': 'The Office'}, {'title': 'The Office '}, {'title': 'The Office'}, {'title': 'The Office'}, {'title': 'The Office'}, {'title': 'The Office'}, {'title': 'The Office'}, {'title': 'the office'}, {'title': 'The Office'}, {'title': 'ThE OffiCE'}, {'title': 'The Office'}, {'title': 'The Office'}]

# loopin thru all the rows from query to print just title column in every row. Reminder: to access a column in dictionary use ["name of column"]
for row in query:
    print(row["title"])
