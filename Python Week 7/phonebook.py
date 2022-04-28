# Implements a phone book
# If we have a dictionary, a set of key-value pairs, we can also check for a particular key, and look at the value stored for it

from cs50 import get_string

#We first declare a dictionary, people, where the keys are strings of each name we want to store, and the value for each key is a string of a corresponding phone number.
people = {
    "Carter": "+1-617-495-1000",
    "David": "+1-949-468-2750"
}

# Search for name
name = get_string("Name: ")
# Then, we use if name in people: to search the keys of our dictionary for a name
if name in people:
    # If the key exists, then we can get the value with the bracket notation, people[name].
    print(f"Number: {people[name]}")