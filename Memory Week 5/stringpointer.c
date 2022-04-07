#include <stdio.h>

int main(void)
{
    // location of fist char in string
    // char *s = "HI!";
    
    // printing 1st, 2nd, 3rd and \0 characters in s
    // printf("%c\n", s[0]);
    // printf("%c\n", s[1]);
    // printf("%c\n", s[2]);
    // printf("%c\n", s[3]);
    
    // printing each char using the * concept or pointer arithmetic which is to treat pointers as numbers
    // printf("%c\n", *s);
    // printf("%c\n", *(s + 1));
    // printf("%c\n", *(s + 2));

    //testing with numbers 
    int numbers[]= {4, 6, 8, 2, 7, 5, 0};
    // printing each int using pointer arithmetic
    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));
}