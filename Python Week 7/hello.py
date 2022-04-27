#### VERSION 1 ####
# Comparing hello and use of cs50 library in C and Python

# In C, get_string and printf with %s
#include <cs50.h>
#include <stdio.h>
# int main(void)
# {
#     string answer = get_string("What's your name? ");
#     printf("hello, %s\n", answer);
# }


# get_string and print, with concatenation
# from cs50 import get_string
# answer = get_string("What's your name? ")
# print("hello, " + answer)


#### VERSION 2 ####
# get_string and print, with format strings
# from cs50 import get_string
# answer  = get_string("What's your name? ")
# print(f"hello, {answer}")

#### VERSION 3 ####
# input and print, with format strings
answer = input("What's your name? ")
print(f"hello, {answer}")