// Program checks for names and phone numbers in a phone book. Both will be strings. When a name is searched, program will return phone number if name found.
// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     string names[] = {"Carter", "David"};
//     string numbers[]= {"+1-617-495-1000", "+1-949-468-2750"};

//     for (int i = 0; i < 2; i++)
//     {
//         if (strcmp(names[i], "David") == 0)
//         {
//             printf("Found %s\n", numbers[i]);
//             return 0;
//         }
//     }
//     printf("User not found");
//     return 1;
// }

// MAKING A BETTER DESIGN MAKING YOUR OWN DATA STRUCTURE
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// typedef is the data input that allows you to make your own data type
// struct tells the compiler that this isnt a simple data type; instead it tells it its a structure.

typedef struct
{
	string name;
	string number;
}
person;


int main(void)
{
    // person is the data type. people is the name of the array
    person people[2];

    // here we opt to specify each component of the index of the array
    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";
    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("User not found");
    return 1;
}