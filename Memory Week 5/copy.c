
// testing what happens when you run a function that stores a string under a new variable, and the copy (string t) is ran thru another function(toupper). 
// Result: When printf is ran on s and t, both print first letter uppercse because t and s are representing the same address.


#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    // string s = get_string("s: ");
    // // string t is copying the value of s
    // string t = s;

    // t[0] = toupper(t[0]);

    // // %s is to get the value of string
    // // both print first letter in uppercase, because t is copying the value of s. In other words, both reference the same location in memory (both pointers have the same address).
    // printf("s: %s\n", s);
    // printf("t: %s\n", t);


    // testing with malloc and free
    // pointing to char s
    char *s = get_string("s: ");
    // telling computer to make a pointer and allocate memory size equal to value of s + 1
    char *t = malloc(strlen(s) + 1);
    // NULL is a 0 in the context of a pointer
    if (t == NULL)
    {
        return 1;
    }
    

    // loop: copy every character of s into every available byte of memory in t
    for (int i = 0, n = strlen(s) + 1; i < n; i++)
    {
        t[i] = s[i];
    }
    // or instead of loop, use strcpy function which does require malloc/free
    // strcpy(t, s);
    
    // condition: only change 1st char of t to uppercase IF the length of t is larger than 0
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // only freeing t since its what we created with malloc 
    free(t);
}