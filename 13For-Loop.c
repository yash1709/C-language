/* For Loop In C: 
The "For" Loop is used to repeat a specific code until a specific condition is satisfied. The for-loop statement is very specialized. 

The syntax of the for loop is:
for ( initialize counter ; test counter ; increment/decrement counter)
{
//set of statements
}

initialize counter: It will initialize the loop counter value, i.e., i=0.
test counter: It verifies whether the condition is true.
Increment/decrement counter: Incrementing or decrementing the counter.
Set of statements: Execute the set of statements.


*** Nested-for loop:
for ( initialization; test condition; increment )
{
    for ( initialization; test condition; increment ) 
    {
    // set of statements
    } 
// set of statements
}

Note: there is no rule that a loop must be nested inside its own type. For loop can be nested inside the while loop and vice versa. 
*/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, j = 0;
    for (i = 0; i < 25, j < 15;)
    {
        printf("%d %d\n", i, j);
        i++;
        j++;
    }

    return 0;
}
