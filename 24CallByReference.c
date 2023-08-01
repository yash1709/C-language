/*
    (b) Call by reference
In this method, the addresses of actual arguments in the calling function are copied into formal arguments of the called function.
This means that using these addresses we could access the actual arguments and hence we would be able to manipulate them. The changes that are made to the parameter affect the argument. This is because the address is used to access the actual argument. Formal and actual arguments will be created in the same memory location.

*/

#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int r = 10, v = 20;
    swap(&r, &v); // passing value to function
    printf("\nValue of r: %d", r);
    printf("\nValue of v: %d", v);
}
