# Comparing C and Python

## C VERSION ##
# // Calculates a remainder
# #include <cs50.h>
# #include <stdio.h>
# int main(void)
# {
#     // Prompt user for integer
#     int n = get_int("n: ");
#     // Check parity of integer
#     if (n % 2 == 0)
#     {
#         printf("even\n");
#     }
#     else
#     {
#         printf("odd\n");
#     }
# }

##  PYTHON VERSION ##
# Calculates a remainder

from cs50 import get_int

# Prompt user for integer
n = get_int("n: ")

# Check parity of integer
if n % 2 == 0:
    print("even")
else:
    print("odd")