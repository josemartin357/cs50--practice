//Here we test realloc which means to reallocate memory
// If there is enough memory, realloc will grow the array in the computer memory
// If memory not available, realloc will copy chunk of memory and relocate it in new location


#include <stdio.h>
#include <stdlib.h>

int main (void){
    // making a list with malloc of size 3
    int *list = malloc(3 * sizeof(int));

    // If nothing in list, return error
    if(list == NULL)
    {
        return 1;
    }

    // initializing array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //using realloc to reallocate memory; passing the address that we want to resize and size of memory
    int *tmp = realloc(list, 4 * sizeof(int));

     // If nothing in list, return error
    if(list == NULL)
    {
        free(list);
        return 1;
    }

    // Assigning list to be equal to what tmp is pointing at
    list = tmp;

    // Adding number to list
    list[3] = 4;

    // Printing new list
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    
    // Free list
    free(list);
    return 0;
}