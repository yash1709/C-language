/* Functions In C: 
Functions :
Functions are used to divide a large C program into smaller pieces.
Function can be called multiple or several times to provide reusability and modularity to the C program.
Functions are also called as procedure or subroutines.
It is a piece of code to accomplish certain operation.

Function is nothing but a group of code put together and given a name and it can be called anytime without writing the whole code again and again in a program.


*** Advantages of Functions :
We can avoid rewriting same logic or code through functions.
We can divide the work among programmers using functions.
We can easily debug or can find bugs in any program using functions.


*** Function Aspects :
There are 3 aspects of function :-

Declaration
Definition
Call

A function is declared to tell the compiler about its existence.
A function is defined to get some task done. (It means when we define function we write whole code of that function. In this actual implementation of function is done.)
A function is called in order to be used.


*** Types of Functions :
Library Functions – These are pre-defined functions in C Language. These are the functions which are included in C header files.
E.g. printf(), scanf() etc.

User defined Functions – Functions created by programmer to reduce complexity of a program i.e. these are the functions which are created by user or programmer.
E.g. Any function created by programmer.


NOTE -: Every C Program must contain one function i.e. main() function as execution of every C program starts from main() function.


*** Ways to define a Function :

There are 4 ways in which we can define any C Function and these are :
1)  Without arguments and without return value.
2)  Without arguments and with return value.
3)  With arguments and without return value.
4)  With arguments and with return value.

*/

// Code as described/written in the video:

#include <stdio.h>
int sum(int a, int b);
// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }
// }

int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    // c = sum(a, b);
    // printstar(7);
    c = takenumber();
    // printf("The sum is %d \n", c);
    printf("The number entered is %d \n", c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
