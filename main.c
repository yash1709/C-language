// Why Learn C Programming Language?

//What is C:
//C is one of the fastest programming language as it is close to low-level languages such as Assembly language. 

//Benefits of C:
//there are a lot of reasons for that such as:
//C takes only significant CPU time for interpretation. That is why a lot Python libraries such as NumPy, pandas, scikit-learn, etc. are built using C.
//It is a highly portable language
//Data structure and algorithm can be better implemented in C language,

//Scope:
//C has a wide range of scope:
//Windows, Linux, Mac all are mostly written in C. Linux is written 97% using C.
//C has also been used widely while creating iOS and Android kernels. MySQL database is written using C.
//Ruby and Pearl are mostly written using C. Most part of Apache and NGINX is written using C.

//Summary:
//C is not a hard language to learn and along with that it stills has a scope in the future. It is a low-level programming language that makes it more efficient and swifter.


//What is coding?
//If we look at the definition i.e. “ coding is the ability to write computer programs”. 
//Coding is a way of communication with the computer.
//Coding is the interaction between the computer and the programmer. Computer is a dumb machine.

//What is an IDE?
//IDE stands for Integrated development environment. It is nothing more than an enhanced version of a text editor that helps you write more efficient and nicer code.

//Compiler:
//A compiler is used to run the program of a certain language by converting the code into the language that our computer could understand. Without a compiler we can not run our code. Every programming language is required a different compiler for its functioning because the syntax of every language is different from the other. 



# include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("hello world");

    return 0;
}


/*Basic Structure of C Program
Pre-processor commands
Functions
Variables
Statements
Expressions
Comments

So, let’s begin with Pre-processor commands.

#include 
This is the first line of our code. Any line starting with # represents a preprocessing command. It tells our program that before its execution, it must include the stdio.h named file in it because we are using some of the commands or codes from this file.


int main()
this is the 2nd line. main() is function here

Here int is the return type of function and the return type is according to the functions activity i.e. if it is giving an integer variable as a result then return type should be int.

int a, b;
here we are initializing two variables as integers. Initializing with integer means that we can store integer values in it.


printf("Enter number a\n");
This is simply a print statement. Whatever we write in the brackets will be directly printed onto the screen. /n is the new line character here.

scanf("%d", &a);
scanf is used to take inputs from the user. Here &a gives the address of variable “a” to store the user's given value. %d notifies that the value should be of integer type.
printf("The sum is %d\n", a+b);
Here a+b is simply a mathematical addition and print statement is printing the result onto the screen.


return 0;
we need a return value for a function. The function we created was of int type so it is returning 0. Return 0 means that the function is working perfectly.


//This is a comment
We write comments by using the double slash sign (//).
*/
