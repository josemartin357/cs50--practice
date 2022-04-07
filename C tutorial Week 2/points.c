// practicing with cs50 library, need to download
// To run: make <file> to compile (after saving), to run ./name of file
// NOTES: You could also put 2 in a var
// const int MYGRADE = 2;

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose? ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }    
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else 
    {
        printf("You lost as many points as me.\n");
    }

}