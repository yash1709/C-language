/* 
2)  Declaring function with pointer in the parameter:
When we pass the address of an array while calling a function then we are using call by reference function call. When we pass an address as an argument in the function, the pointer in the function receives the address of the array.

void myfunc (int *ptr) {}

*/

// Example:
#include <stdio.h>
void display(int *ptr)
{
    printf("%d", *ptr);
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        display(&arr[i]);
    }
    return 0;
}



/* NOTE:
Remember that, when we make a change in array using pointers in the functions, the actual array will also be affected.
For Example, the array element arr[1]=100, and in function we write *(ptr+1)=200, then the element which is store at arr[1] becomes equal to 200.

*/
