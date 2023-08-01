/* Nested Switch in C:
We can also use nested switch statements i.e., switch inside another switch. 

   The syntax of the nested switch is:
switch (expression 1)
{
    Case 1 : 
    printf(“Switch Statement 1”);

    switch (expression 2)
    {
        Case 1 :
        printf(“Switch Statement 2”);
        Break;

        Case 2 : 
        Do this;
    }
    break;

    Case 2 : 
    Do this;
}


*** Why do we need a Switch case?
There is one problem with the if statement: 
the program's complexity increases whenever the number of if statements increases. 
If we use multiple if-else statements in the program, the code might become difficult to read and comprehend.
Using the switch statement is the solution of this problem.


*** Rules for Switch Statement -:
The test expression of Switch must be an int or char.
The value of the case should be an integer or character.
Cases should be inside the switch statement.
Using the break keyword in the switch statement is not necessary.
The case label values inside the switch should be unique.

Difference between a switch and if:
1) Switch statements cannot evaluate float conditions, and the test expression can be an integer or a character, 
   whereas if statements can evaluate float conditions. 
2) The switch statement cannot evaluate relational operators i.e., they are not allowed in switch statements,
   whereas if statements can evaluate relational operators. 
3) Switch Cases in the switch can never have variable expressions; for example, we cannot write case a +3 : 


*/

// Code as described/written in the video :

#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;

        default:
            printf("your marks are not 45");
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;

    default:
        printf("Age is not 3, 13 or 23\n");
    }

    return 0;
}
