# Implements linear search for numbers; here we check each element in list

# import sys
# # A list of numbers
# numbers = [4, 6, 8, 2, 7, 5, 0]
# # Search for 0
# # With if 0 in numbers:, we’re asking Python to check the list for us.
# if 0 in numbers:
#     print("Found")
#     sys.exit(0)
# print("Not found")
# sys.exit(1)


### PRACTICE VERSION 1 ###
# Using linear search
# from sys import exit
# # making list of numbers
# numbers = [20, 30, 40, 50]
# # checking if number sought is in numbers
# # if it is ...
# if 20 in numbers:
#     print("Found")
#     exit(0)
# # if not ....
# else:
#     print("Not Found")
#     exit(1)

## PRACTICE VERSION 2 ##
# Asking user input and executing linear search
from sys import exit
# define list of numbers
numbers = [2, 4, 5, 7, 0, 12, 15, 16, 17, 19, 20]
# define variable number which also asks for user input
number = int(input("Enter number between 0 and 20: "))
# checking conditions. if number in numbers, then print found and exit
if number in numbers:
    print(f"The number {number} is in this list. Congrats!")
    exit(0)
# if not found, print not found and exit program
else:
    print(f"The number {number} is not in the list. Better luck next time!")
    exit(1)