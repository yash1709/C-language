/*Now we are going to write a command in our power terminal window, down below:

gcc-Wall-save-temps file_name.c -o new_file
Note: Here the file_name is the name of the file we created to write code and new_file is the name we want our executable file to have.

Now I will tell you the benefits of this command. By the help of this command five files will be created namely:

file_name.i
file_name.s
file_name.o
file_name.c
new_file.exe
file_name.i will create a preprocessing file where comments are removed, macros are expended and all the code from # files are copied into the file_name.i file with our respective code at the end.

file_name.s will have our code converted in assembly level code

file_name.o will have all the code in machine level language in binary form.

file_name.c will contain our executable C language code.

new_file.exe is the linker that links all the file_name.o sort of files at on place.
*/



#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number a\n");
    scanf("%d" , &a);

    printf("Enter number b\n");
    scanf("%d" , &b);

    printf("the sum is %d\n", a+b);

    return 0;
}

/* Basic Syntax Of a C Program:

A C program is made up of different tokens combined together. These tokens include:

Keywords
Identifiers
Constants
String Literal
Symbols


int a;
printf("Enter number a\n");
scanf("%d", &a)
return 0;


Keywords:
Keywords are reserved words that can not be used elsewhere in the program for naming a variable or function, instead they have a specific function or tasks and they are solely used for that. In the above given code, the return statement in the third line is a keyword.



Image: List of all the Keywords of C


Identifiers:
Identifiers are names given to variables or functions in order to differentiate them from one another. They are solely based on our choice but there are few rules that we have to follow while naming identifiers. According to the rules the name can not contain special symbols such as @, - , *, < , etc. In the above given code the “a” integer is an identifier.


Note: C is a case sensitive language so an identifier containing a capital letter and another one containing a small letter at the same place will be different. For example the three words: Code, code and cOde can be used as three different identifiers.


Constant:
Constant are very similar to variable and their values can be of any data type. The only difference between constant and variable is that a constant’s value never changes. 
In the above given code the “0” in the last line is a constant.


String literal:
String literal or string constant is a line of characters enclosed by double quotes. In the above given code “Enter number a” is a string literal.


Symbol:
Symbols are special characters reserved to perform certain actions. They are used to notify the compiler so they can perform specific tasks on the given data. In the above example code & is being used as a symbol.
*/