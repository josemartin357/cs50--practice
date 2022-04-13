// testing what happens when you have garbage values
// garbage values: if a variable is asigned but not allocated (it doesnt have values), sometimes ints, floats, etc will appear in the memory allocation.
// In other words, data from a random set of data storage in the computer will appear.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // here we assign a variable but do not allocate values
    int scores[3];
    // here we call a loop ..
    for (int i = 0; i < 3; i++)
    {
        // and print the values of scores
        // since no values had been assigned, garbage values will print
        printf("%int\n", scores[i]);
    }
    
}