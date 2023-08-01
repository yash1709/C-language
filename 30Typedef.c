/*  Typedef In C: 

What is typedef in C?
A typedef is a keyword that is used to assign alternative names to existing datatypes. 
We use typedef with user defined datatypes, when names of the datatypes become slightly complicated to use in programs. 


Typedefs can be used to:
Provide the clarity in the code
it makes easier to change the underlying data types that you use
Typedefs makes the code more clear and easier to modify.


For example, suppose we want to create a variable of type unsigned long, then it becomes a time taking task if we want to declare multiple variables of this type. To overcome this problem, we use a typedef keyword.

typedef unsigned long ul; 

The above example defines a term ul for an unsigned long datatype. Now this ul identifier can be used to define unsigned long type variables.

ul a, b, c;


Let's see an example:

#include <stdio.h>
int main()
{
    typedef unsigned long ul;
    ul a = 5, b = 8;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}



*** There are various applications of typedef:
1.  Typedef can be used with an array mostly with multi-dimensional array. It will increases the readability.
2.  typedef can be used for providing a pseudo name to pointer variables as well.
typedef int* ptr
ptr a, b, c;



*** Advantages of typedef:
1.  Typedef increases the readability of the code. If we are using structure and function pointer in our code, it will increase the readability of code.
2.  With the help of typedef, we can use the same name for the different types in different scopes.
3.  In the case of structure, if we use the typedef then we do not require to write struct keyword at the time of variable declaration.
4.  Typedef increases the portability of the code.


*/

//  Code as described/written in the Harry's video:                    // video no. 38

#include <stdio.h>                                   // Video dekhna harry ka code ke liye

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    // int *a, b;
    typedef int *intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;

    // std s1, s2;
    // s1.id = 56;
    // s2.id = 89;
    // printf("Value of s1's Id is %d\n", s1.id);
    // printf("Value of s2's Id is %d\n", s2.id);

    // typedef ;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer a = 4;
    // printf("Value of a is %d", a);
    return 0;
}
