# Program that takes command line arguments
# Note: argv[0] would be the name of our program, like argv.py, and not python.


### VERSION 1 ###
# Prints a command-line argument
# from sys import argv
# if len(argv) == 2:
#     print(f"hello, {argv[1]}")
# else:
#     print("hello, world")

### VERSION 2 ###
# Printing command-line arguments, indexing into argv
# from sys import argv
# for i in range(len(argv)):
#     print(argv[i])

### VERSION 3 ###
# # Printing command-line arguments at a different index in a list
# from sys import argv
# # this lets us slice the list from 1 to the end.
# for arg in argv[1:]: # We can write argv[:-1] to get everything in the list except the last element.
#     print(arg)