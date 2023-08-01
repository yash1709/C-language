/* WHAT IS THE DIFFERENCE BETWEEN WHILE AND DO-WHILE LOOPS IN C?
1) While loop is executed when given test condition return true, whereas, do-while loop is executed for the first time irrespective the test condition is true or false, because the test condition is checked after executing while loop for the first time.

2) This difference between while and do-while will be more clear by the following program.

main( ) {
while ( 2 < 1 )
printf ( "Hello World \n") ;
}
Here, since the condition fails the first time itself, the printf( ) statement will not get executed. Let's now write the same code using a do-while loop.

main( ) {
do {
printf ( "Hello World\n") ;
} while ( 2 < 1 ) ;
}
In this program, the printf( ) statement would be executed once, since first the body of the loop is executed, and then the test condition is evaluated.
*/

#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
}
