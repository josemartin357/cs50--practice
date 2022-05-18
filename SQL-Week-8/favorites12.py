# Searches CSV for popularity of a title
import csv
from cs50 import SQL

# Open database
db = SQL("sqlite:///favorites.db")

# Prompt user for title and stripping white spaces before and after
title = input("Title: ").strip()

# Search for title
# "%" + title + "%" makes a search that includes whats on tittle
rows = db.execute("SELECT COUNT(*) AS counter FROM favorites WHERE title LIKE ?", "%" + title + "%")
# rows prints: [{'counter': X}]

# Get first (and only) row 
row = rows[0]

# Print counter key as set in rows
print(row["counter"])
