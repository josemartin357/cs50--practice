# Comparing C and Python in points program
# C version

#include <cs50.h>
#include <stdio.h>

# int main(void)
# {
#     // Prompt user for points
#     int points = get_int("How many points did you lose? ");

#     // Compare points against mine
#     if (points < 2)
#     {
#         printf("You lost fewer points than me.\n");
#     }
#     else if (points > 2)
#     {
#         printf("You lost more points than me.\n");
#     }
#     else
#     {
#         printf("You lost the same number of points as me.\n");
#     }
# }

# Python Version
from cs50 import get_int

# Prompt user for points
points = get_int("How many points did you lose? ")

# Compare points against mine
if points < 2:
    print("You lost fewer points than me.")
elif points > 2:
    print("You lost more points than me.")
else:
    print("You lost the same number of points as me.")