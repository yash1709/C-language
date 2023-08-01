/* Arrays And Pointer Arithmetic In C

There are four arithmetic operators that can be used on Pointers :

++
--
+
-
Pointers arithmetic is not same as normal arithmetic. 

*/

/* Pointers Arithmetic 

We can’t add, multiply or divide two addresses. (Subtraction is possible)
E.g:
int a, b, *p, *q;
&a*&b; // Not Possible
&a+&b; // Not Possible
p*q; // Not Possible


We can’t multiply & divide an address with integer value.
E.g :
&a*5; // Not Possible
p/5; // Not Possible


@  We can add or subtract integer to/from an address.
E.g :
int a,b; // Let’s Suppose &a is 1000
int *p, *q;
p=&a;
q=&b;
p+1; // It is possible [1000+1 = 1004]


*** To Find arithmetic (+,-) of any pointer :
Pointer + n = pointer + size of (type of pointer)*n

*/

// Code as described/written in the video of HARRY                        // video no. 27 from C playlist

#include <stdio.h>
int main()
{
    // char a = '3';
    // char* ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d", ptra-2);
    int arr[] = {311, 52, 3, 4, 5, 6, 67};
    int *arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1);
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2);
    // arr--; // this line will throw an error

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

    return 0;
}
