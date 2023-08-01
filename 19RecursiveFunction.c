/* Recursion In C: 

Recursive Functions :
Recursive functions or Recursion is a process when a function calls a copy of itself to work on smaller problems.

Recursion is the process in which a function calls itself directly or indirectly. And the corresponding function or function which calls itself is called as recursive function.

Any function which calls itself is called recursive function.
This makes life of programmer easy by dividing complex problem into simple or easier problems.
A termination condition is imposed on such functions to stop them executing copies of themselves forever or infinitely.
Any problem which can be solved recursively can also be solved iteratively.
Recursions are used to solve tower of Hanoi, Fibonacci series, factorial finding etc.



Base condition in recursion :
The case at which the function doesn’t recur is called the base case.

Recursive Case :
The instances where the function keeps calling itself to perform a subtask i.e. solving problem by dividing it in small parts, is called the recursive case.

*/

#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);             //Recursion of Function
    }
}

int main()
{
    int num;
    printf("Enter a no. :");
    scanf("%d", &num);
    printf("\nThe factorial of %d is %d", num, factorial(num));

    return 0;
}
