/*  Callback Functions Using Function Pointers In C : #73

In Functions Pointers, the function name can be used to get the function address. Function pointers can be useful when we want to create a callback mechanism and need to pass the function's address to another function. They can also be useful when you want to store an array of functions to call dynamically.


*** What is a Callback Function?
If a function's reference is passed to another function as an argument to call it, it will be called a Callback function.
This allows the programmer to write less code and do more things. A callback function is a function that is called by using a function pointer. Function Pointer, as its name suggests, is a pointer to a function.

The following are some scenarios that help us in understanding the callback functions.

Let's say we have a function that downloads a file from the internet and takes a function pointer. When the download is complete or an error has happened, we would like to execute the callback.

void fileDownload (const char *file, void (*callback_function)(int statusCode));


Let us have another example; we have a function that sets up a callback function that is called when a click has been detected on a button.



Following is the example of a callback function using a function pointer.:-


#include
void A()
{
printf("I am function A\n");
}
// callback function
void B(void (*ptr)())
{
(*ptr) (); // callback to A
}
int main()
{
void (*ptr)() = &A;
// calling function B and passing
// address of the function A as argument
B(ptr);
return 0;
}


Output: I am function A.



*** Difference between Function Pointer and Callback Functions

1. A function pointer is a pointer that points to the function. Whereas, callback functions are function pointers passed as parameters of the function, which can be called back when an event occurs.

2. A function pointer is an address of the function. Whereas, callback functions pass function pointer as an argument, and the caller would callback if something happens.



*/

//  Code as described/written in the Harry's video :

#include <stdio.h>
// #include

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloAndExecute(ptr);
    return 0;
}
