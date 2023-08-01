/*  Function Pointers In C : #72

To understand this concept of function pointers, you should have the basic knowledge of Pointers and dynamic memory allocation.


In Functions Pointers, the function name can be used to get the function address.
Following is the syntax of function pointers in C.

*** Function Pointer Syntax :
The syntax for declaring a function pointer might seem difficult initially, but its quite straightforward once we understand what's going on.
To declare the function pointer, use the following syntax :
function_return_type(*Name_of_pointer)(function arguments list)


Example :
void (*fun)(int, char);
In this example, fun is a pointer to a function taking two arguments, an integer and character, and that returns void.
It's as if we are declaring a function called "*fun", which takes an int and char, and returns void; now, if *fun is a function, then fun must be a pointer to a function.
The following are the legal way of declaring function pointers.

int (*sum)( int);                           //legal declaration of function pointer
int *sum();                                 //This is not a declaration of function pointer


*** Following is the example of function pointer :

// #include <stdio.h>
// int AddNumber (int n1, int n2){
// return n1+n2;
// }
// int main()
// {
// int (*fun) (int, int);
// fun = AddNumber;
// int res1 = fun(20, 20);
// int res2 = AddNumber(20, 20);
// printf("Using function pointer: %d",res1);
// printf("\n Using function name: %d",res2);
// return 0;
// }



*** Some Important points regarding function pointer :

1)  We can declare a function pointer and assign a function to it in a single statement like this:
void (*function_ptr)(int) = &fun;


2)  We can remove the ampersand(&) from this statement because a function name alone represents the function address.
void (*function_ptr)(int) = fun;




*/

//  Code as described/written in the Harry's video :                      // video no. 72

// #include <stdio.h>                                      // lots of bugs in the code 
// // #include

// int sum(int a, int b)
// {
//     return a + b;
// }

// void greet()
// {
//     printf("Hello world my user good morning%d\n");
// }

// int main()
// {
//     printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // Testing the function
//     int (*fPtr)(int, int);                           // Declaring a function pointer
//     fPtr = sum                                        // Creating a function pointer
//         // int d = (*fPtr)(4, 6);                       // Dereferencing a function pointer
//     // printf("The value of d is %d\n", &d);
//     return 0;
// }
