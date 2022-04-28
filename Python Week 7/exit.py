# This program exits with explicit value, importing sys

### VERSION 1 ###
# Here we import the whole sys library, but specify in argv and exit functions the library it comes from
# import sys
# if len(sys.argv) != 2:
#     print("Missing command-line argument")
#     sys.exit(1)
# print(f"hello, {sys.argv[1]}")
# sys.exit(0)

### VERSION 2 ###
# Here we specify in top line the functions we use from library sys
# from sys import argv, exit
# if len(argv) != 2:
#     print("Missing command-line argument")
#     exit(1)
# print(f"hello, {argv[1]}")
# exit(0)