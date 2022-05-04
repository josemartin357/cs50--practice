# Implements a phone book
# If we have a dictionary, a set of key-value pairs, we can also check for a particular key, and look at the value stored for it

# from cs50 import get_string

# #We first declare a dictionary, people, where the keys are strings of each name we want to store, and the value for each key is a string of a corresponding phone number.
# people = {
#     "Carter": "+1-617-495-1000",
#     "David": "+1-949-468-2750"
# }

# # Search for name
# name = get_string("Name: ")
# # Then, we use if name in people: to search the keys of our dictionary for a name
# if name in people:
#     # If the key exists, then we can get the value with the bracket notation, people[name].
#     print(f"Number: {people[name]}")

## PRACTICE VERSION 1 ##
## Function implements a phone book
# dictionary data type carries names and phone numbers
from sys import exit
names = {
    "Martin": "281-784-8928",
    "Anita": "482-123-8902",
    "Erika": "782-234-5342",
    "Jenny": "782-782-8916"
}
# define variable that takes a string used to search name and which is entered by user
name = str(input("Enter the name you are searching: "))
# conditional if name searched is in dictionary
if name in names:
    print(f"{name}'s phone number is {names[name]}")
    exit(0)
# conditional if name searched IS NOT in dictionary
else:
    print(f"{name}'s contact info is not in our database. Our apologies!")
    exit(1)

