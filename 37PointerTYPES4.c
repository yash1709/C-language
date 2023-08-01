/*  Wild Pointer In C Language : #55

*** Wild pointers
“Uninitialized pointers are known as void pointers.”

For Example :
int *ptr;
In the above example, we created a pointer but didn't give it any value, so it becomes a wild pointer.

Its disadvantage is that it will store any garbage value in it, meaning it will hold some arbitrary memory location. Due to the storage of some random location, it can cause a lot of bugs in the program, and sometimes the programmer will not even be able to identify the cause.

@   Solution :
To avoid the bugs and errors it can cause in a program ; we prefer to convert a void pointer to a NULL pointer. By doing so, our pointer will not point to any memory location, as it will point to 0 or NULL location. We can convert a wild pointer to a NULL pointer by merely placing it equal to NULL.

Let us see it in C syntax.
Syntax :
int *ptr = NULL;
So, we will adopt this method if we are not using our pointer to point at some memory location.


Now the other way to save ourselves from such problems is to initialize the pointer.

For example :
int x = 3;
int *ptr;
ptr = &3;
If we only execute the first two lines in the above chunk of code, then it will be a wild pointer as no value has been initialized to it, but if we execute the third line too, it will point to some location, making it a normal pointer.




*** Dereferencing :
We cannot dereference a wild pointer as we can not be sure about the data in the memory it is pointing towards.
Dereferencing a wild pointer can cause a lot of bugs and can also crash the program.


*/

//  Code as described/written in the Harry's video :-

#include <stdio.h>
// #include
int main()
{
    int a = 4354;
    int *ptr; // This is a wild pointer
    // *ptr = 34; // This is not a good thing to do
    ptr = &a; // ptr is no longer a wild pointer
    printf("The value of a is %d\n", *ptr);
    return 0;
}
