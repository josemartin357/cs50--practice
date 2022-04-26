// testing swapping; that is the act of swapping the values of two variables.
// Issue with this code: the output doesnt reflect the swapping. The issue is that the the swap function (in the stack in memory) doesnt really output. Once the last line runs; the tmp,a and b values go away and garbage values stay in the memory where a and b where. Those garbage values are still 1 and 2 respectively.
// Solution: use pointers to lead a and b to the pointer of x and y.
#include <stdio.h>

// reference issue
// void swap(int a, int b);

// reference solution. Passing pointer in function swap
void swap(int *a, int *b);

// FIRST in memory (solution): variable x holds value 1 in address 0x123 (sample address). And variable y holds value 2 in addres 0x456 (sample address)
int main(void)
{
    int x = 1;
    int y = 2;
    // testing what x and y will print prior to swapping
    // %i will print the int value
    printf("x is %i, y is %i\n", x, y);
    // swapping x and y in issue sample
    // swap(x, y);
    // swapping x and y in solution. Using & because we are passing an address
    swap(&x, &y);
    // testing x and y value after swapping
    printf("x is %i, y is %i\n", x, y);
}

// reference issue
// void swap(int a, int b)
// {
//     int tmp = a;
//     a = b; 
//     b = tmp;

// }

// reference solution
// changing function to reference pointers.
// SECOND in memory: a holds the value that it's in address 0x123, b holds the value that it's in address 0x456. a => 0x123; b => 0x456
void swap(int *a, int *b)
{
    // THIRD in memory: tmp stores whatever is in the address of a. Here, the address of a holds the address 0x123 which is the value of 1. tmp = 1
    int tmp = *a;
    // FOURTH in memory: the location of x (0x123) takes the value in the address of y (0x456). 0x123(x) = 2
    *a = *b; 
    // FIFTH in memory: the location of y (0x456) takes the value of tmp which is 1. 0x456(y) = 1
    *b = tmp;

}