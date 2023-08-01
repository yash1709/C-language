/*  Dynamic Memory Allocation Malloc Calloc Realloc & Free() : #47


For the allocation of memory using the heap, we have four functions:

Malloc
Calloc
Realloc
Free


1)  malloc():
malloc stands for memory allocation.
As can be guessed by its name, it requests memory from the heap and returns a pointer to the memory. The pointer is of the void type, so that we can typecast it for any variables. All the values at the allocation time are initialized to garbage values. Its syntax is simple as we have to provide the memory space along with the size we want in bytes.

Syntax:
ptr = (ptr-type*) malloc(size_in_bytes)

For example:
int *ptr;
ptr = (int*) malloc (3* sizeof(int))
Note: We are using the sizeof() function here because the size of int may differ in different systems, so to be on the safe side.



2)  calloc():
calloc stands for contiguous allocation.
It also requests memory from the heap and returns a pointer to the memory and has the same functionality as malloc(), two main differences, though. We have to send as parameters the number of blocks needed along with their size. The second difference is a major one. That is, in calloc(), the values at the allocation time are initialized to 0 instead of garbage value.

Syntax:
ptr = (ptr-type*) calloc(n,size_in_bytes)

For example:
int *ptr;
ptr = (int*) malloc (10, sizeof(int))



3)  realloc():
realloc stands for reallocation.
It is used in cases where the dynamic memory is insufficient or wants to increase the already allocated memory to store more data. Its syntax is simple as we just have to overwrite the memory already allocated as a parameter in the function while providing the data related to the pointer.

Syntax:
ptr = (ptr-type*) realloc(ptr,new_size_in_bytes)

For example:
ptr = (int*) realloc (ptr, 5* sizeof(int))



4)  free():
As we discussed earlier, while discussing the disadvantages of dynamic memory allocation that we have to free up the allocated memory space manually as there is no automatic procedure for that. So free is used to free up the space occupied by the allocated memory. Its syntax is the easiest of all, as we have to send the pointer as a parameter inside the function.

Syntax:
free(ptr)


*/

//  Code as described/written in the Harry's video :-                             // video no. 47

#include <stdio.h> // video dekhna ek baar harry ka
#include <stdlib.h>

int main()
{
    // //Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    // printf("Enter the value no %d of this array\n",i);
    // scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    // printf("The value at %d of this array is %d\n",i, ptr[i]);
    // }

    // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // Use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}
