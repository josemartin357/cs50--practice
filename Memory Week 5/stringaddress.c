#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     string s = "HI!";
//     // variable for H
//     char c = s[0];
//     // the address of c
//     char *p = &c;
//     // printing location of c
//     printf("%p\n", p);
// }

int main(void)
{
    string s = "HI!";
    // pointer to first char in s, aka H
    char *p = &s[0];
    // printing location of first char in s, aka H
    // %p tells computer to print address
    printf("%p\n", p);
    //printing the address of s. 
    // %p tells computer to print address
    printf("%p\n", s);
    // RESULT: location of s is location of first character in the string. Therefore, location of p and s will be the same
}
