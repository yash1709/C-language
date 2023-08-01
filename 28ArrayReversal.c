/*  Array Reversal In C - 


Instruction:
In this task you have to write a C program that will reverse an array of integers. For that purpose, create the function that will take array as an argument and reverse an array.

Your program should print the array before and after reversal.

For Example:

Before Reversal: 1, 2, 3, 4, 5, 6, 67

After Reversal: 67, 6, 5, 4, 3, 2, 1


General Woek:

#include 

void arrayRev(arg1)
{
}
int main()
{
int arr[] = {1, 2, 3, 4, 5, 6, 67};

return 0;
}


*/

#include <stdio.h>
// target: 67,6,5,4,3,2,1
// 7 items
// 1,2,3,4,5,6,67
// 67,2,3,4,5,6,1
// 67,6,3,4,5,2,1
// 67,6,5,4,3,2,1

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

void arrayPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);

    return 0;
}
