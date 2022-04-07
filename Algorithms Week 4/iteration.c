// HAVING ISSUES TRYING TO COMPILE JUST USING MAKE. INSTEAD COMPILE USING: clang -lcs50 (program)
// This programs prints a pyramid from top to bottom. 
#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    // when i equals 4
    for (int i = 0; i < n; i++)
    {
        // .. then you will print until j is less than i + 1. Why? you have to add 1 to i to get the # of bricks to print in the screen
        // its common to use j after i in a nested loop
        for (int j = 0; j < i+1; j++ )
        {
            printf("#");
        }
        printf("\n");
    }
}