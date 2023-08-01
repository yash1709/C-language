/*  C Language Employee Manager Exercise 8 :


Problem Statement:-
Suppose ABC is a private limited company which manages the employee records of other companies. Employee id can be of any length, and it can contain any character.

The following are the task you have to perform for three employees --
*   Take the length of an employee id as an input and store it in an integer length variable
*   Take an employee id as an input and display it on the screen.
*   Save the employee id in a character array, which is allocated dynamically.
*   Create only one character array dynamically.


Program Example:-

Employee1;
Enter the no. of characters in your employee id: 45
//dynamically allocate the character array
Take input from the user: //employee_id

Employee2;
Enter the no. of characters in your employee id: 5
//dynamically allocate the character array
Take input from the user: //employee_id

Employee3;
Enter the no. of characters in your employee id: 9
//dynamically allocate the character array
Take input from the user: //employee_id



*/

//  Code as described/written in the Harry's video:-                        // video no. 48

#include <stdio.h>                                // ek baar video dekh lena phir se
#include <stdlib.h>

int main()
{
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen.
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically

    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i + 1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    // EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user

    return 0;
}
