// To run: make <file> to compile (after saving), to run ./name of file
#include <stdio.h>

// int main(void)
// {
//     printf("meow.\n");
//     printf("meow.\n");
//     printf("meow.\n");
// }

// OR SAMPLE USING WHILE
// int main(void)
// {
// int i = 3;
// while (i > 0)
// {
//     printf("meow\n");
//     i--;
// }   
// }

// OR SAMPLE USING FOR LOOP
// When adding a function, name function, specify what variables and what is returned
// meow is a function
// void meow(void)
// {
//     printf("meow\n");
// }


// int main(void)
// {
// for (int i = 0; i < 3; i++)
// {
//     // here we call meow
//     meow();
// }
// }

// HERE WE TWEEK TO ALLOW MEOWS FOR N TIMES
// n (parameter) clegoes here as we call function but really explain what it does below main
void meow(int n);

int main(void)
{
    meow(3);
}

// n added also in meow parameter and inside for loop
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}