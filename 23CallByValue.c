/* The function calls are of two types. In function calls, one of the important concepts is the formal and actual parameters.

Formal Parameter: Formal parameters are the local variable which are assigned values from the arguments when the function is called.
Actual Parameter: When a function is called, the values(expression) that are passed in the call are called arguments or actual parameters. 


There are two ways we generally pass the arguments to functions: 

(a) Call by values
In this method, the ‘call by value’ of each of the actual arguments in the calling function is copied into corresponding formal arguments of the called function. In this function call, the changes made to the formal arguments in the called function have no effect on the values of actual arguments in the calling function.

*/

#include <stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void main()
{
    int r = 20, v = 40;
    swap(r, v); // passing value to function
    printf("\nValue of r: %d", r);
    printf("\nValue of v: %d", v);
}
