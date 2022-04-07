#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    // testing how to print the value of n
    // printf("%i\n", n);
    // Testing how to print location of n,  %p is special code to print pointers
    printf("%p\n", p);

    // Testing the dereference operator
    printf("%i\n", *p);
}

// Pointers
// Notes: In C, a variable with the value &n; will give you the address of that number. You need to use asterisk in name of variable. For example: int *p = &n;


// Dereference operator
// If you know that a value is at a specific address, you can use an * as a dereference operator which means go to that address
