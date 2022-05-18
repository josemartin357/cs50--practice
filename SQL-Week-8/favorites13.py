# Imports titles and genres from CSV into a SQLite database
import cs50
import csv
  
# Create database in write mode
open("favorites8.db", "w").close()
# providing a way to access a database
db = cs50.SQL("sqlite:///favorites8.db")
  
# Create tables
db.execute("CREATE TABLE shows (id INTEGER, title TEXT NOT NULL, PRIMARY KEY(id))")
db.execute("CREATE TABLE genres (show_id INTEGER, genre TEXT NOT NULL, FOREIGN KEY(show_id) REFERENCES shows(id))")
  
# Open CSV file
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader = csv.DictReader(file)
    # Iterate over CSV file
    for row in reader:
        # Canoncalize title
        title = row["title"].strip().upper()
        # FIRST (right side of syntax) - In shows table, we insert title based on every title in csv file.
        # SECOND - we put insert statement into a variable
        show_id = db.execute("INSERT INTO shows (title) VALUES(?)", title)
        # In every row, we grab the genres, we split them with a ,   ....
        for genre in row["genres"].split(", "):
            # ... and we insert into genres every genre and the show_id saved in variable
            db.execute("INSERT INTO genres (show_id, genre) VALUES(?, ?)", show_id, genre)