// testing a comparison of string. Here we test get_string comparison. Even though hi! and hi! seem the same for human eye. In computer, they are not as they are allocated in different parts of memory and therefore they are different.
// In other words, get_string has always been returning the address of the first char in a string(pointer), and trusting that we always put a \n at the end to specify where string starts and ends.
// Memory allocation: pointer s will take 8 bytes(its standard) and in it, it will save the memory location of the first char in string. Example: Pointer s holds 0x123. String HI!\0 takes the following slots in memory: 0x123, 0x124, 0x125, 0x126.


#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Here we test how s and t comparison will be different..
    // string s = get_string("i: ");
    // string t = get_string("j: ");

    // if (s == t)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }

    // here we test how to go around it using strcmp method. This will work as we are using special method that indeed compares strings
    // strcmp is a function that first checks for the pointer of a char(location in memory), and has a loop that runs thru every char left to right checking for differences.
    char *s = get_string("i: ");
    char *t = get_string("j: ");

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}