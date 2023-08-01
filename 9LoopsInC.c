/* Loops In C
The versatility of the computer lies in its ability to perform the set of instructions repeatedly. 
This involves repeating some code in the program, either a specified number of times or until a particular condition is satisfied. 
Loop control instructions are used to perform this repetitive operation.

Following are three types of loop in C programming.

For loop
While loop
do-while loop


There are two kinds of loops.
Entry Controlled loops: 
    In entry controlled loops, the test condition is evaluated before entering the loop body. 
    The For Loop and While Loop are an example of entry controlled loops.

Exit Controlled Loops: 
    In exit controlled loops, the test condition is tested at the end of the loop. 
    The loop body will execute at least once, whether the test condition is true or false. 
    The do-while loop is an example of an exit controlled loop.


1) For Loop:-
A for loop is a repetition control structure that allows us to efficiently write a loop that will execute a specific number of times. 


2) while loop:-
While loop is called a pre-tested loop. 
The while loop allows code to be executed multiple times, depending upon a boolean condition that is given as a test expression. 

***Note: 
   While studying for loop, we have seen that the number of iterations is known, whereas while loops are used in situations where we do not know the exact number of iterations of the loop. The while loop execution is terminated on the basis of the Boolean (true or false) test condition.


3) do-while loop:-
In do-while loops, the execution is terminated on the basis of the test condition. The main difference between the do-while loop and while loop is that, in the do-while loop, the condition is tested at the end of the loop body, whereas the other two loops are entry controlled loops.

Note: In do-while loop, the loop body will execute at least once irrespective of the test condition.



*** What about an Infinite Loop?
An infinite loop also known as an endless loop occurs when a condition always evaluates to true. Usually, this is considered an error.
Sometimes, while executing a loop, it becomes necessary to jump out of the loop. For this, we will use the break statement or continue statement.

break statement
When a break statement is encountered inside a loop whether it is a for loop or a while loop, the loop is terminated and the program continues with the statement immediately following the loop.

continue statement
Using a continue statement in the loop will cause the control to go directly to the test-condition and then it will continue the loop process.

*/