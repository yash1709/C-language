/* Question : Write a program which produces Fibonacci Series of numbers using both Recursive and Iterative approach ?


fib_recursive(int n):
if n==1 or n==2:
return n-1

else:
return fib_recursive(n-1) + fib_recursive(n-2)

*/

#include <stdio.h>

int fib_recursive(int n)                              // 2nd step
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)                              // 3rd step
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; //1 for iteration 1
        a = b - a; //1 for iteration 1
    }

    return a;
}

int main()                                                     // 1st step of program
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}




/* Why is Recursion not always good ?
Iterative approach takes less time as in case of Fibonacci Series it doesn’t call same no. again and again but in Recursive approach it calls same no. again and again i.e. many times.

Recursion is a good approach when it comes to problem solving.
However, programmer needs to evaluate the need and impact of using recursive/iterative approach while solving a particular problem.
In case of Factorial calculation, recursion saved a lot of lines of code.
However in case of Fibonacci Series recursive approach called many functions again and again causing time waste.
*/
