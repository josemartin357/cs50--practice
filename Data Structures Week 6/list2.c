// Testing how to implement memory dynamically
// This function implements a list of numbers with an array of dynamic size. First we start with a list with 3 ints, then we add a 4th.
#include <stdio.h>
// stdlib.h contains malloc and free
#include <stdlib.h>

int main(void)
{
    // List of size 3. Here we get enough memory from heap for list using malloc
    int *list = malloc(3 * sizeof(int));
    // if something goes wrong
    if (list == NULL)
    {
        // return error
        return 1;
    }

    // Initialize list of size 3 with numbers
    // Since i asked computer to give me memory for 3 ints, it is okay to treat it like an array using [] because computer will do arithmetic and find first, second and third location.
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // if you wanted to use pointer arithmetic instead...
    // *list = 1;
    // *(list + 1) = 2;
    // *(list + 2) = 3;

    // Time passes

    // Now we need the list to be of size 4. Here we ask computer for a second chunk of memory (temporary) of size four
    int *tmp = malloc(4 * sizeof(int));
    // Making a safety check. If there is no more memory, clean and quit.
    if (tmp == NULL)
    {
        // freeing the original list memory
        free(list);
        return 1;
    }

    // Copy values of list of size 3 into list of size 4
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    // Adding new number to new list of size 4
    tmp[3] = 4;

    // Freeing the memory space requested for list of size 3
    free(list);

    // Remember list of size 4
    // Remembering in my list variable what the address of the new chunk of memory (tmp) is
    // In other words, assigning list to be identical to what tmp is pointing at
    list = tmp;

    // Print new list of size 4
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Freeing memory requested with malloc for the new list of size 4
    // By freeing list, we are freeing actually tmp. So we could just free(tmp) instead.
    free(list);
    return 0;
}