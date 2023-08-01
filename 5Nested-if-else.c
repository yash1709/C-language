/* Nested If-Else Statements:
   We can write an entire if-else statement within either the body of the if statement or the body of an else statement.
   This is called ‘nesting’ of ifs. 
*/

#include <stdio.h> 
int main()
{
    int a;
    printf("Enter either 0 or 1 ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Number 1 is entered!");
    }
    else
    {
        if (a == 0)
        {
            printf("Number 0 is entered");
        }
        else
        {
            printf("Wrong Input");
        }
    }
    return 0;
}
