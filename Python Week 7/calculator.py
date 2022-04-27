# Testing differences in C and Python

### VERSION 1 ###
# Addition with int
# include <cs50.h>
# include <stdio.h>

# int main(void)
# {
#     Prompt user for x
#     int x = get_int("x: ");
#     Prompt user for y
#     int y = get_int("y: ");
#     Perform addition
#     printf("%i\n", x + y);
# }

# Addition with int [using get_int]
# from cs50 import get_int
# # Prompt user for x
# x = get_int("x: ")
# # Prompt user for y
# y = get_int("y: ")
# # Perform addition
# print(x + y)

### VERSION 2 ###
# Addition with int [using input]
# Prompt user for x
# x = int(input("x: "))
# # Prompt user for y
# y = int(input("y: "))
# # Perform addition
# print(x + y)

### VERSION 3 ###
# Using exception in case user enters a string rather than int
# try:
#     x = int(input("x: "))
# except ValueError:
#     print("That is not an int!")
#     exit()
# try:
#     y = int(input("y: "))
# except ValueError:
#     print("That is not an int!")
#     exit()
# print(x + y)

# ### VERSION 4 ###
# # # Division with integers, demonstration lack of truncation
# Prompt user for x
x = int(input("x: "))
# Prompt user for y
y = int(input("y: "))
# Divide x by y
# if you wanna avoid the decimals use //
z = x / y
print(z)

# ### VERSION 5 ###
# # Floating-point imprecision
# # Prompt user for x
# x = int(input("x: "))
# # Prompt user for y
# y = int(input("y: "))
# # Divide x by y
# z = x / y
# print(f"{z:.50f}")