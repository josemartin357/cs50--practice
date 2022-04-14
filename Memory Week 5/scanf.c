// Testing scanf; a function that takes user input and stores it in a variable
#include <stdio.h>

// int main(void)
// {
//     // setting a variable called x
//     int x;
//     // asking user for value of x
//     printf("x: ");
//     // scanning integer using %i and storing what user types at x memory location
//     scanf("%i", &x);
//     // print out what human enters
//     printf("x is %i\n", x);
// }

int main(void)
{
    // making an array of 4 characters
    char s[4];
    // asking user to enter value of s
    printf("s: ");
    // scanning user input and assigning input to s
    scanf("%s", s);
    // printing the value of s
    printf("s: %s\n", s);
}