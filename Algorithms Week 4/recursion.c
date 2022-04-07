// Function returns a pyramid. Here we use recursion
// Whats recursion? Recursion is to use a function inside the same function. Here we use draw inside draw
#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    // this condition ensures that we dont do this forever
    if (n <= 0)
    {
        return;
    }

// using draw inside draw
    draw(n-1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
 printf("\n");   
}