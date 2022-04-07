// USING STRING.H FROM MANUAL PAGE: manual.cs50.io
// function to convert lowercase word into uppercase
// #include <stdio.h>
// #include <cs50.h>
// #include <string.h>

// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         // asking question if current character (aka the i character of s) is higher or equal to lowercase a and lower or equal than lowercase z. If it is ...
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             // ... then we force it to uppercase
//             printf("%c", s[i] - 32);
//         }
//         else
//         {
//             // else we return as it is (lowercase)
//             printf("%c", s[i]");
//         }
//     }
//     printf("\n);
// }

// OR USING ctype.h from manual.cs50.io
// HERE WE USE A FUNCTION AS PART OF ONE OF THE CONDITIONS TO BE CHECKED
// #include <stdio.h>
// #include <cs50.h>
// #include <string.h>
// #include <ctype.h>

// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         // if its already uppercase
//         // using islower from ctype.h to ask if i in string s is lowercase. If answer is 0, aka false, then ...
//          if (islower(s[i] != 0))
//         {
//             // ... we print uppercase
//              printf("%c", s[i] - 32);
//             //  EXAMPLE USING toupper built function in ctype.h
//             // printf("%c", toupper(s[i]));
//         }
//         else
//         {
//              printf("%c", s[i]");
//         }
//     }
//     printf("\n);
// }


// EXAMPLE SIMPLY USING THE toupper function without if statements
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n);
}