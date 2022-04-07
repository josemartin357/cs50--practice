// practicing with cs50 library, need to download
// To run: make <file> to compile (after saving), to run ./name of file
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    // %s is a placeholder, a format code saying to put a strng here eventually
    // hello, %s\n is one input, answer another one
    printf("hello, %s\n", answer);
    // this is the same but bad design
    // printf("hello, %s\n", get_string("What's your name? "));
}