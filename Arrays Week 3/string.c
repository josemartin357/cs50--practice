// USING STRING.H FROM MANUAL PAGE: manual.cs50.io
// function to make a string, it outputs same as input
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    // int length = strlen(s)
    // for (int i = 0; i < length; i++)
    // THIS IS THE SAME AS. HERE WE DECLARE VARIABLES I AND N
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }

    printf("\n");
}
