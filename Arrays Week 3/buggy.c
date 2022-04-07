#include <stdio.h>

int main (void)
{
    for (int i = 0; i <= 3; i++)
    {
        // using printf to see inside computer memory
        // printf("i is %i\n", i);
        printf("#\n");
    }
}

// One way to debug from terminal, use `debug50 ./buggy`
// Here i run the preset debugger gcc build etc. Set a breaking point where values start getting processed, then click step over to see what happens step by step all the way to the moment you exit out the function.
// Step over goes over the line executing it.
// Step into lets you go into other functions you've written