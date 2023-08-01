/*  String Functions In C & string.h Library: 

The string.h library is used to perform string operations. It provides several functions for manipulating character strings.

Following are some commonly used string handling functions:

1)  strcat( ):-
This function is used to concatenates the source string at the end of the target string. For example, “Hello” and “World” on concatenation would result into a string “HelloWorld”.

*/

// #include <stdio.h>                     //     Here is an example of strcat( )
// #include <string.h>
// int main()
// {
//     char s[] = "Hello";
//     char t[30] = "World";
//     strcat(t, s);
//     printf("String = %s", t);
// }
// //Output: string = HelloWorld

/*
2)  strlen( ):-
This function is used to counts the number of characters present in a string.
*/

// #include <stdio.h>                       //     Here is an example of strlen( )
// #include <string.h>
// int main()
// {
//     char str[] = "Harry";
//     int str_length;
//     str_length = strlen(str);
//     printf(" length = %d", str_length);
// }
// //Output: length = 5

/* 
3)  strcpy( ):-
This function is used to copies the contents of one string into another. The base addresses of the source and target strings should be given to this function.
*/

// #include <stdio.h>                        //   Here is an example of strcpy( )
// #include <string.h>
// int main()
// {
//     char s[] = "CodeWithHarry";
//     char t[20];
//     strcpy(t, s);
//     printf("\n Source string = %s", s);
//     printf("\n Target string = %s", t);
// }
// //And here is the output...
// //Source string = CodeWithHarry
// //Target string = CodeWithHarry

/*
4)  strcmp( ):-
This function is used to compares two strings to find out whether they are same or different.
The strcmp() will compare two strings character by character until there is a mismatch or end of one of the strings is reached. 
If both of the strings are identical, strcmp( ) returns a value zero. If they are not identical, it will return the numeric difference between the ASCII values of the first non-matching pairs of characters. 
*/

// #include <stdio.h>                         //   Here is a example of strcmp( )
// #include <string.h>
// int main()
// {
//     char string1[] = "Harry";
//     char string2[] = "Code";
//     int a;
//     a = strcmp(string1, string2);
//     printf("\n%d", a);
//     return 0;
// }
// //Output:1

/*
5)  strrev():-
This function is used to show the reverse of the string.
*/

// #include <stdio.h>                        //   Here is a example of strrev( )
// #include <string.h>
// int main()
// {
//     char str[50] = "1234";
//     printf("After reversing string is =%s", strrev(str));
//     return 0;
// }
// //Output: After reversing string is = 4321

// Code as described/written in the Harry's video:                  // video no. 35

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];
    printf("The strcmp for s1, s2 returned is %d ", strcmp(s1, s2));
    // puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reversed string s1 is: ");
    // puts(strrev(s1));
    // printf("The reversed string s2 is: ");
    // puts(strrev(s2));

    // strcpy(s3 ,strcat(s1, s2));
    // puts(s3);

    // allow user to enter two strings and then concatenate them by saying that
    // str1 is a friend of str2
    return 0;
}
