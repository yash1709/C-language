/*  Flow of a C program
         Preprocessing === Compilation === Assembly === Linking === Loading

          Variable
                 A name given to a memory location
                 Declared by writing type variable_name;
                 Initialized and declared by type variable_name = value
                  
          Rules for Defining a variable in C
                 Can contain alphabet, digits and underscore (_)
                 A variable name can start with an alphabet and underscore only
                 Can't start with a digit
                 No whitespace & reserved keywords is allowed
                 Valid variable names := int harry, float harry123, char _yash143
                 Invalid variable names := $harry, int 77yash, char long;

          DATA TYPES IN C
                 Basic data types : int, char, float, double
                 Derived data type : array, pointer, structure, union
                 Enumeration data type : emum
                 Void data type : void
 */

#include <stdio.h>
int main()
{
       printf("%lu", sizeof(int));
       printf("%lu", sizeof(char));
       return 0;
}
