/* Continue Statement :
The continue statement is used inside loops in C Language. When a continue statement is encountered inside the loop, control jumps to the beginning of the loop for next iteration, skipping the execution of statements inside the body of loop after continue statement.
It is used to bring the control to the next iteration of the loop.
The continue statement skips some code inside the loop and continues with the next iteration.
It is mainly used for a condition so that we can skip some lines of code for a particular condition.
*/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        // if (age>10)
        // {
        // break;
        // }
        if (age > 10)
        {
            continue;
        }
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("Harry is a good boy");
    }

    return 0;
}
