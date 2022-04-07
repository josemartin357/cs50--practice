// NOTES: 

#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    // with %c we assign spaces for each char
    printf("%c%c%c\n", c1, c2, c3);
    // if using "%i %i %i\n", you get the ASCII values
    // if desiring to taking input char and convert it to int for output
    printf("%i %i %i\n", (int) c1, (int) c2, (int) c3);
}

// EXAMPLE 2: converting a string into individual values
// #include <cs50.h>
// int main(void)
// {
//     string s = "HI!";
//     printf("%i %i %i\n", s[0], s[1], s[2]);
// }
