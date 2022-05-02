# Testing the mario program in Python

### VERSION 1 ###
#Printing a column of size 3 with a loop
# for i in range(3):
#     print("#")


### VERSION 2 ###
#Printing a column of n bricks with a loop using get_int from cs50 library
# from cs50 import get_int
# n = get_int("Height: ")
# for i in range(n):
#     print("#")

#Better design of version 2
# from cs50 import get_int
# #getting the same effect of a do while loop; although python doesnt have a do while loop
# while True:
#     # n will be the input value of get_int
#     n = get_int("Height of column: ")
#     # if user enters value higher than 0..
#     if n > 0:
#         # the condition is met and we exit the loop
#         break
# for i in range(n):
#     print("#")

# ## VERSION 3 ###
# # Prints a column of bricks, using a helper function to get input
# from cs50 import get_int
# # main function
# def main():
#     # establish height as the value obtained from helper function get_height
#     height = get_height()
#     # using range to run the number of height and print #
#     for i in range(height):
#         print("#")
# # get_height function
# def get_height():
#     # run if condition met
#     while True:
#         # n takes input value of get_int
#         n = get_int("Height: ")
#         # if user inputs a value higher than 0
#         if n > 0:
#             # pass n
#             return n
# # calling main function to run
# main()

### VERSION 4 ###
# Prints a column of bricks, catching exceptions
# def main():
#     height = get_height()
#     for i in range(height):
#         print("#")
# def get_height():
#     # this function will be successful
#     while True:
#         # if n equals an int
#         try:
#             n = int(input("Height: "))
#             if n > 0:
#               break
#         # using ValueError to print message if different data type is input
#         except ValueError:
#             print("That's not an integer!")
#     return n
# main()

### VERSION 5 ###
# Prints a row of 4 question marks with a loop
# for i in range(4):
#     # using end named argument to end every line what that value; instead of the \n standard in python
#     print("?", end="")
# print()
# Note: if a print function is not called again, the output will be ????%


### VERSION 6 ###
# Prints a row of 4 question marks without a loop and using multiply operator
# print("?" * 4)

### VERSION 7 ###
# Prints a 3-by-3 grid of bricks with loops; this is 2 dimensional so could be made using double loop
# When analyzing this, look from inside j out to i
# here we print three columns of j
# for i in range(3):
#     # printing a line of 3 bricks
#     for j in range(3):
#         print("#", end="")
#     print()

### VERSION 8 ###
# Prints a 3-by-3 grid of bricks with loop and * operator
# for i in range(3):
#     print("#" * 3)

### PRACTICE VERSION ###
# main function calls value returned from get_height and runs loop
# def main():
#     # object stores value passed in helper function
#     height = get_height()
#     # loop and print
#     for i in range(height):
#         print("#")
# # do while loop asks for input and checks if value higher than 0. Then, returns n value of function
# def get_height():
#     while True:
#         n = int(input("Height: "))
#         if n > 0:
#             break
#     return n
# # execute main function
# main()

## PRACTICE VERSION 2 ##
# main function defines object which will carry value of helper function and runs a loop to print
# def main():
#     height = get_height()
#     for i in range(height):
#         print("#")
# # helper function with except valueError
# def get_height():
#     while True:
#         try:
#             n=int(input("Height: "))
#             if n > 0:
#                 break
#         except ValueError:
#             print("Not a number")
#     return n

# main()

