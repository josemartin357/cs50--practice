// PENDING: DOWNLOAD LIBRARY CS50
// To run: make <file> to compile (after saving), to run ./name of file
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    // or use long data type which allows to use 64 bits
    int y = get_int("y: ");
    printf("%i\n", x + y);
    // or instead of running params x and y; you could make a var called z = x + y;
}

// To make if statements in C
if (x < y)
{
    printf("x is less than y\n");
}
else
{
    printf("x is not less than y\n");
}

// Statements using else if
if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else if (x == y)
{
    printf("x is equal to y in value\n");
}
// ALTHOUGH: A comparison like this has 3 scenarios: less, greater or equal. Therefore the last statement could just be "else"

