// practicing with cs50 library, need to download
// To run: make <file> to compile (after saving), to run ./name of file
// code (file name).c in terminal to make file
#include <cs50.h>
#include <stdio.h>


// THIS PROGRAM WILL RETURN A NUMBER OF ? DEPENDING ON THE VALUE A USER ASSIGNS TO WIDTH (N) WHEN PROMPTED
// int main(void)
// {
//     // making an integer called n
//     int n;
//     // using a while loop to do this (keep showing width: ) while loop is less than 1
//     do
//     {
//         n = get_int("Width: ");
//     }
//     while (n < 1);
//     // The moment n is larger than 1, i break out of the do while, and move to the for loop
//     // using a for loop to run question marks depending on the value of n
//     for (int i = 0; i < n; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// ANOTHER EXAMPLE
// HERE WE WRITE A PROGRAM THAT RETURNS AN AMOUNT OF BRICKS THAT RESSEMBLES AN EQUAL WALL IN HEIGHT AND WIDTH. FOR EACH BRICK WE USE A #
int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    // for each row
    for (int i = 0; i < n; i++)
    {
        // for each column
        for (int j = 0; j < n; j++)
        {
            // print a brick
            printf("#");
        }
        // move to the next row
        printf("\n");
    }
}
