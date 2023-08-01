/*  Command Line Calculator In C : #70

Problem Statement :-
You have to create a command-line utility to add/subtract/divide/multiply two numbers. The first command-line argument of your c program must be the operation. The next arguments being the two numbers.


Here is an example:-

Command.c add 45 4

49


//  Task must be performeed in that way :

#include <stdio.h>
#include

int main()
{
// You have to create a command line utility to add/subtract/divide/multiply two numbers
// First command line argument of your c program must be the operation.
// The next arguments being the two numbers. For example:
// >>Command.c add 45 4
// >>49
return 0;
}



*/

//  Code as described/written in the Harry's video :                   //   video no. 70

#include <stdio.h>                                        // ek baarr video dekh lena
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // You have to create a command line utility to add/subtract/divide/multiply two numbers
    // First command line argument of your c program must be the operation.
    // The next arguments being the two numbers. For example:
    // >>Command.c add 45 4
    // >>49
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    // printf("Operation is %s\n", operation);
    // printf("Num1 is %d\n", num1);
    // printf("Num2 is %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}
