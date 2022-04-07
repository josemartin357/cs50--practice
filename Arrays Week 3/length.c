// THIS PROGRAM OUTPUTS THE LENGTH
// #include <stdio.h>
// #include <cs50.h>

// int main(void)
// {
//     string name = get_string("Name: ");
// // local variable of i initialized with 0
//     int i = 0;
//     // asking question does location 0, 1 ,2 etc that it's i in the string not equal 0? If it doesnt, then that means its an actual character
//     while (name[i] != '\0')
//     {
//         // then lets increment i
//         i++
//     }
//     // then we print the result
//     printf("%i\n", i);
// }

// ANOTHER EXAMPLE MAKING YOUR OWN FUNCTION
// #include <stdio.h>
// #include <cs50.h>

// // calling function especified below
// int string_length(string s);

// // main function
// int main(void)
// {
//     // making a string value prompted by user using get_string function from cs50.h
//     string name = get_string("Name: ");
//     // making an int using the string_length function and using argument name
//     int length = string_length(name);
//     // prints the integet value of i
//     printf("%i\n", i);
// }

// // function to count int value of string s
// int string_length(string s)
// {
//     // local variable of i initialized with 0
//     int i = 0;
//     // asking question does location 0, 1 ,2 etc that it's i in the string s not equal 0? If it doesnt, then that means its an actual character
//     while (s[i] != '\0')
//     {
//         // then lets increment 
//         i++
//     }
//     // pass value of i to main function
//     return i;
// }

// OR USING STRING.H FROM MANUAL PAGE: manual.cs50.io
