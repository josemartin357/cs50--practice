// practicing with cs50 library, need to download
// To run: make <file> to compile (after saving), to run ./name of file
// code (file name).c in terminal to make file
// NOTE: float is used to store decimal numbers

#include <cs50.h>
#include <stdio.h>

// float discount(float price);

// int main(void)
// {
//     float regular = get_float("Regular price: ");
//     float sale = discount(regular);
//     // %.2f is the format to call two decimals 
//     printf("Sale price: %.2f\n", sale)
// }

// float discount(float price)
// {
//     return price *.85;
// }

// ANOTHER EXAMPLE USING PERCENTAGE
float discount(float price, int percentage);

int main(void)
{
    // getting regular price by asking user
    float regular = get_float("Regular price: ");
    // getting percent off by asking user
    int percent_off = get_int("Percentage off? ");
    // calling price and percentage parameters and applying them to discount function which will be equal to sale
    float sale = discount(regular, percent_off);
    // printing sale as a two decimal format
    // %.2f is the format to call two decimals 
    printf("Sale price: %.2f\n", sale)
}

float discount(float price, int percentage)
{
    // adding a formula to get percentage
    return price * (100 - percentage) / 100;
}