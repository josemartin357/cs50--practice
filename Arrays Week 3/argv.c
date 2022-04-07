// Building a command line program that returns hello <name> after name adding when running function in command line. 
// To run: ./argv Martin. It should out put "hello, Martin"
#include <cs50.h>
#include <stdio.h>

// main function takes an integer argument count and a string argument vector.
int main(int argc, string argv[])
{
    // condition: if argument count equals 2, then we know a word (hopefully name) was added
    if (argc == 2)
    {
        // if thats the case, print index 1, which in this case it would be what you type after ./argv. In other words, it would be your name
       printf("hello, %s\n", argv[1]);
    }
    // else we just print hello world.
    else
    {
        printf("Hello world\n");
    }
}