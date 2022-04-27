# Comparing C and Python in an agreement program

### C VERSION ###
# // Logical operators
# #include <cs50.h>
# #include <stdio.h>
# int main(void)
# {
#     // Prompt user to agree
#     char c = get_char("Do you agree? ");
#     // Check whether agreed
#     if (c == 'Y' || c == 'y')
#     {
#         printf("Agreed.\n");
#     }
#     else if (c == 'N' || c == 'n')
#     {
#         printf("Not agreed.\n");
#     }
# }

### PYTHON VERSION 1 ###
# # Logical operators
# from cs50 import get_string
# # Prompt user to agree
# s = get_string("Do you agree? ")
# # Check whether agreed
# if s == "Y" or s == "y":
#     print("Agreed.")
# elif s == "N" or s == "n":
#     print("Not agreed.")

### PYTHON VERSION 2 ###
# Logical operators, using lists
# from cs50 import get_string
# # Prompt user to agree
# s = get_string("Do you agree? ")
# # Check whether agreed
# if s.lower() in ["y", "yes"]:
#     print("Agreed.")
# elif s.lower() in ["n", "no"]:
#     print("Not agreed.")

### PYTHON VERSION 3 ###
# Logical operators, using regular expressions
import re
from cs50 import get_string
# Prompt user to agree
s = get_string("Do you agree? ")
# Check whether agreed
if re.search("^y(es)?$", s, re.IGNORECASE):
    print("Agreed.")
elif re.search("^no?$", s, re.IGNORECASE):
    print("Not agreed.")