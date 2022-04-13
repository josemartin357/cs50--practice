// making mistake purposely checking for malloc 
// here malloc returns an array of three ints. In other words, the address of chunk of memory that could fit three ints

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    // making an integer called pointer x
    // the right side gives a chunk of memory for 3 integers. malloc returns address of 1st byte of that chunk
    // left side stores address
    int *x = malloc(3 * sizeof(int));
    // mistake 1 on purpose: we are not indexing starting 0. 
    // mistake 2: touching memory that shouldnt. x[3] means go to the fourth int in the chunk of memory that came back. We only asked for enough memory for 3 ints; not 4. This is known as "buffer overflow"
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;

    //fixes below
    // Solution for mistake 1: index starting 0.
    // Solution for mistake 2: free memory
    // x[0] = 72;
    // x[1] = 73;
    // x[2] = 33;

    // free(x);
}