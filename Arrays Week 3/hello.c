// compiling with clang. Example: clang hello.c
// a.out stands for assembler output, which is the default name for a program that you compile yourself
// clang -o hello hello.c -> with this you tell clang the specific file you are compiling
// ./hello runs the program
// #include <stdio.h>

// int main (void)
// {
//     printf("Hello World. \n");
// }

// ANOTHER EXAMPLE USING get_string from cs50.h
// Here we tell clang to grab fuction from cs50 library with clang -o hello hello.c -lcs50
// note that stdio was not compiled because its standard and it happens automatically
// -o is output and it tells the system what the output name will be
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string name = get_string("What's your name? ");
    printf("Hello %s\n", name);
}