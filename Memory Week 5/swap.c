// testing swapping; that is the act of swapping the values of two variables.
// Issue with this code: the output doesnt reflect the swapping. The issue is that the the swap function (in the stack in memory) doesnt really output. Once the last line runs; the tmp,a and b values go away and garbage values stay in the memory where a and b where. Those garbage values are still 1 and 2 respectively.
// Solution: use pointers to lead a and b to the pointer of x and y.
#include <stdio.h>

// reference issue
// void swap(int a, int b);

// reference solution
void swap(int *a, int *b);

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
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b; 
    *b = tmp;

}