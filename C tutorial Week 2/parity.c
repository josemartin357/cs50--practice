// practicing with cs50 library, need to download
// To run: make <file> to compile (after saving), to run ./name of file
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n = get_int("n: ");
// % to obtain the remainder
// in c, == is equal, one = means the value of something is something
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}