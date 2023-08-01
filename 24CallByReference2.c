/*   Conclusions
From the above discussion, we can draw the following conclusions:

1)  If we want the value of an actual argument to not get changed in the function being called, pass the actual argument by value.
2)  If we want the value of an actual argument should get changed in the function being called, then pass the actual argument by reference. 
3)  If a function is to be made to return more than one value at a time then use call by reference method for that purpose.

*/

// Code as described/written in the Harry's video:                 // video no. 31

#include <stdio.h>

void changeValue(int *address)
{
    *address = 37565;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of 'a' is %d\n", a);
    changeValue(&a);
    printf("The value of 'a' now is %d\n", a);
    return 0;
}

