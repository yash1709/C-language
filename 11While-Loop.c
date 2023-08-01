/* While Loop In C:
While loop is also called as a pre-tested loop. A while loop allows code to be executed multiple times, depending upon a given Boolean(true or false) condition. The 'while' loop is mostly used in the case where the number of iterations is not known. If the number of iterations is known, then we use 'for' loop.

The Syntax of while loop is:
while (condition test)
{
// Set of statements
}

Properties of while loop:
In the while loop, we cannot execute the loop until we do not specify the condition expression.
It is possible to execute a while loop without any statements. This will give no error. 
We can have multiple conditional expressions in a while loop.
*/

#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 54)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
