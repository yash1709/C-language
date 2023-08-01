/* Do While Loop In C
A do-while loop executes the statements inside the body of the do-while loop before checking the condition.

Following is the syntax of the do-while loop in C programming.
do {
   ( statements );
} 
while
   ( test condition );

If the test condition returns true, the flow of control jumps back up to do, and the set of statements in the loop executes again. This process repeats until the given test condition becomes false.
*/

// Program that add numbers until the user enters zero
#include <stdio.h>

int main()
{
    int n, sum = 0;
    do
    {
        printf("Enter a number:");
        scanf("%d", &n);
        sum += n;
    } while (n != 0);
    printf("Sum is = %d", sum);

    return 0;
}

/* Output:-
Enter a number: 3 
Enter a number: 4 
Enter a number: 8 
Enter a number: 0 
Sum is = 15
*/
