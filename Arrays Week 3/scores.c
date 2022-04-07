// #include <stdio.h>

// int main(void)
// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
// }

// We get error message because to get an average, you need to include decimal values. One solution was to change "3" to "3.0"
// There are better ways to have multiple values stored in memory that happened to be of the same data type

// USING AN ARRAY INSTEAD
// #include <stdio.h>

// int main(void)
// {
//     int scores[3];
//     scores[0] = 72;
//     scores[1] = 73;
//     scores[2] = 33;

//     printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
// }

// OR IF USING CS50.H
// #include <cs50.h>
// #include <stdio.h>
// int main(void)
// {
//     int scores[3];
//     scores[0] = get_int("Score: ");
//     scores[1] = get_int("Score: ");
//     scores[2] = get_int("Score: ");

//     printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
// }

// IMPROVING DESIGN USING FOR LOOP
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

// IMPROVING DESIGN USING FOR LOOP
// pending: still need to clarify the printf portion
// #include <cs50.h>
// #include <stdio.h>
// int main(void)
// {
//     int n = get_int("How many scores? ");

//     int scores[n];
//     for (int i = 0; i < n; i++)
//     {
//         scores[i] = get_int("Score: ");
//     }
//     printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
// }