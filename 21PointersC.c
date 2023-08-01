// Pointers In C

/* Pointer :

@  Pointer is a variable that contains address of another variable. It means it is a variable but this variable contains address or memory address of any other variable.
It can be of type int, char, array, function, or any other pointer.
@  Its size depends on architecture.
Pointers in C Language can be declared using *(asterisk symbol).

*/

// #include <stdio.h>

// int main()
// {
//     int x = 5;
//     int *a = &x;                // *a = address of x

//     printf("%d\n", &x);         // printf address of x
//     printf("%d", a);            // printf the value which is stored at that position, here address of x is stored
//     return 0;
// }

/* Now let’s see about some of the operators which we use with Pointers :

Address of Operator (&) :
· It is a unary operator.
· Operand must be the name of the variable.
· & operator gives address no. of variable.
· & is also known as “Referencing Operator”.


Indirection Operator :
· * is indirection operator.
· It is also known as “Dereferencing Operator”.
· It is a unary operator.
· It takes address as an argument.
· * returns the content/container whose address is it’s argument. 

*/


/* Null Pointer :
A pointer that is not assigned any value but NULL is known as NULL pointer.
In computer programming NULL pointer is a pointer that does not point to any object, variable or function.
We can use it to initialize a pointer variable when that pointer variable isn’t assigned any valid memory address yet.
int *ptr = NULL;


// #include <stdio.h>

// int main()
// { 
// printf("Pointer Basics\n");
// int a =5;
// int *p=NULL;

// printf("%d\n", p);

// return 0;
// }



Uses of Pointers:
· Dynamic Memory Allocation
· Arrays, Functions and Structures
· Return multiple values from a function
· Pointer reduces the code and improves the performance


*/

// Codes described/written in video of HARRY :                    // video no. 26 from C playlist

#include <stdio.h>

int main()
{
    printf("Pointer Basics\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;

    printf("The Address of pointer is %p\n", &ptra);
    printf("The Address of a is %p\n", & a);
    printf("The Address of a is %p\n", ptra);
    printf("The Address of some garbage is %p\n", ptr2);
    printf("The Value of a is %d\n", *ptra);
    printf("The Value of a is %d\n", a);
    return 0;
}
