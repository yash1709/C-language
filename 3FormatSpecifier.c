/*  Format Specifier 
        Format specifier is a way to tell the compiler what type of data is in a variable during taking input displaying output to the user.
        printf("This is a good boy %a.bf, var");  will print var with b decimal points in a 'a' character space.
        Through this  format specifier, we tell the compiler what type of variable we are using scanf() or pintinting using printf().Some examples are %d, %c, %f,etc.
        The %c and %d used in the printf() are called format specifiers.
        Format Specifier tells printf() to print the value, for %c, a character will printed, and for %d, a decimal will be printed.

                  %c === print the character
                  %d === signed integer
                  %f === float values
                  %i === unsigned integer
                  %l ===  long integer
                  %lf === double integer
                  %s === string
                  %u === unsigned integer

                printf("\n The value of integer is %d", d); 
                printf("\n The value of float is %f", f); 
                printf("\n The value of character is %c", c); 
                printf("\n The value of string is %s", s); 


    ESCAPE SEQUENCE
        An escape sequence is a sequence of characters which are used in formatting the output. They are not displayed on the screen while printing.
                \t === inserts a tab
                \b === backspace
                \n === a newline
                \' === Inserts a single character quote 
                \" === Inserts a double character quote
                \\ === backslash
                \a === beep or alarm

         Ex., 
             <!___ newline _________________>
                printf("\n This is my C program\n");    

             <!___ use of \" _______________>
                printf("\n Welcome to \"The C Programming tutorial\""); 

             <!___ use of \' _______________>
                printf("\n Welcome to \'C programming series \'");

             <!___ to provide tab space between two words ______>
                printf("Hello \t Viewers"); 

             <!_____ to add vertical tab character ___________>
                printf("Hello Viewers");
                printf("\v Welcome to C Programming");                 

*/

#include <stdio.h>
#define PI 3.14
/* this is a multiline comment
     .
     . 
     . 
     .
     .
    this is ignored by my compiler
     .
     .
*/
int main()
{
   int a = 8;
   const float b = 7.333;
   // PI = 7.33;  // cannot do this since PI is a constant
   printf(" tab character \t\t my backslash %f", PI);
   // b = 7.22;  // cannot do this since b is a constant
   // printf("Hello World\n");
   // printf("The value of a is %d and the value of b is %2.4f\n", a, b);
   // printf("%18.4f this", b);

   return 0;
}
