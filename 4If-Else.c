/* If Else Control Statements In C

   The if-else Statement:
Following is the syntax of if-else statements:
if ( condition )
{ 
   statements;
}
else
{
   statements;
}
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number less than 10 ");
    scanf("%d", &num);
    if (num <= 10)
    {
        printf("Number is less than 10");
    }
    else
    {
        printf("Number is greater than 10");
    }
    return 0;
}
