/* Switch Case Control Statements In C
     The control statement that allows us to make a decision effectively from the number of choices is called a switch,
     or a switch case -default since these three keywords go together to make up the control statement.

       The syntax of the switch statement is :

switch (integer expression)                         // no semicolon
{
case value 1:                                       // colon is necessary
    do this;                                        // semicolon

case value 2:
    do this;

case value 3:
    do this;

default:                                            // colon
    do this;
}

*/

#include <stdio.h>

int main()
{
    int i = 7;                                     // just change the value of 'i'

    switch (i)
    {
    case 5:
        printf("Value is 7");
        break;

    case 0:
        printf("Value is 8");
        break;

    case 9:
        printf("Value is 9");
        break;

    default:
        printf("Value is not present");
        break;
    }
    return 0;
}
