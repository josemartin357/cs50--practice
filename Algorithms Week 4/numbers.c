// Function looks thru array of integers a specific value
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // new way to establish the elements of an array with C
    int numbers[] = {4,6,8,2,7,5,0};
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 1)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}