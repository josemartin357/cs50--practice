// practicing with cs50 library, need to download
// To run: make <file> to compile (after saving), to run ./name of file
// If using a data type for single character, use char; if a word, use a string
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    // check whether user agreed
    // || is OR ... && is AND
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Disagreed.\n");
    }
}