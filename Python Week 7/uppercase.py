# Python program which uppercases string one character at a time

## VERSION 1 ###
## Uppercases string one character at a time
# from cs50 import get_string
# # making variable that stores string input by user
# before = get_string("Before: ")
# # making fluffy text that says After: 
# print("After:  ", end="")
# # for c in the string in question
# for c in before:
#     # we print the uppercase version of every character and dont output any line
#     print(c.upper(), end="")
# print()

### VERSION 2 ###
## Uppercases string all at once
# from cs50 import get_string
# before = get_string("Before: ")
# after = before.upper()
# print("After: ", after)
## or print(f"After: {after}")

## PRACTICE VERSION ##
# define variable that takes and requests user input for lowercase version of word
before = str(input("Enter lowercase word: "))
print("UPPERCASE VERSION: ", end="")
# using loop to upper case 1 char at a time
for c in before:
    after = c.upper()
    print(after, end="")
print()

