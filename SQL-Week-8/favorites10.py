import csv
import re

# For counting mentions of The Office
counter = 0

# Open CSV File
with open("favorites.csv", "r") as file:

    # Create DictReader
    reader = csv.DictReader(file)

    # Iterate over CSV file, counting mentions of OFFICE and THE OFFICE
    for row in reader:
        title = row["title"].strip().upper()
        if re.search("^(OFFICE|THE OFFICE)$", title):
            counter += 1

# Print popularity
print(f"Number of people who like The Office: {counter}")

# More on Regular Expressions:
# The re library has a function, search, to which we can pass a pattern and string to see if there is a match.
# We can change our expression to "^(OFFICE|THE OFFICE)$", which will match either OFFICE or THE OFFICE, but only if they start at the beginning of the string, and stop at the end of the string (i.e., there are no other words before or after).
# We can even change THE OFFICE to THE.OFFICE, allowing any character (like a typo) to be in between those words.
# Short cheat sheet:
# . for any character
# .* for 0 or more characters
# .+ for 1 or more characters
# ? for an optional character
# ^ for start of input
# $ for end of input