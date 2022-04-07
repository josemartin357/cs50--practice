// You cant use an equation to compare two strings like with float or bool
// here we use strcmp from string.h; its a prebuilt function to compare strings 
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Ron", "Fred", "Ginny", "Percy", "George"};

    for (int i = 0; i < 7; i++)
    {
        // strcmp requires this syntax for comparison: str a, str b. We check if equal to 0 because per documentation 0 means that they are equal
        if (strcmp(names[i], "Ron") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}