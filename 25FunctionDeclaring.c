/*  There are two ways of passing array to a function as argument:


1)  Declaring Function with array as a parameter:
We pass the array to a function to make it accessible within the function. When we pass an entire array to a function, then the function can access all the elements of the array. Single array elements can also be passed as arguments, it could be a sized or unsized array. This can be done in the same way as we pass variables to a function. 
Following are the syntax of passing array as an argument:


Formal parameters as an unsized array
void myfunc (int arr[]) {}


Formal parameters as a sized array
void myfunc (int arr [100]) {}


Formal parameters as a two dimensional array.
void myfunc (int arr [3][3]) {}

*/

// Example:-

#include <stdio.h>
int sum(int arr[])
{
    int sum_of_array = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum_of_array += arr[i];
    }
    return sum_of_array;
}

int main()
{
    int result, array[] = {23, 33, 44, 55};
    result = sum(array);
    printf("Result = %d", result);
    return 0;
}
