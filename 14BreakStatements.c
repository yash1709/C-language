/* Break Statement :
Break statement is used to break the loop or switch case statements execution and brings the control to the next block of code after loop or switch case.
Break statements are used to bring the program control out of the loop.
The break statement is used inside loops or switch statement in C Language.
*/

#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 5; i++)
    {

        printf("Iteration time = %d\nEnter Your Age : ", i);
        scanf("%d", &age);
        if (age > 10)
        {
            break;                                                                // Checking Break Statement
        }

        // if(age<10)
        // { continue; }
        // printf("Hey Guys\n");
        // printf("This code is printed coz if condition is not satisfied. \n");
        // printf("Checking Continue Statement\n\n");                             // Checking Continue Statement
    }
    return 0;
}
