/*  Structures In C: 

What is a Structure in C?
Structures are usually used when we want to store dissimilar data together.
Structure elements are always stored in contiguous memory locations.


The general form of a structure declaration statement is given below: 

struct { 
structure element 1;
structure element 2; 
structure element 3;
} struct_variable;



How to Access the Structure Elements?
As we use subscript to access individual elements of an array. But in the case of structures, to access any element, we use the operator (.). This dot operator is coded between the structure variable name and the structure member that we wish to access.

*** Note that before the dot operator there must always be a structure variable and after the dot operator there must always be a structure element.



*/

// Example:-

// #include <stdio.h>
// struct book
// {
//     char title[20];
//     char Author_name[100];
//     float price;
//     int pages;
// };
// int main()
// {
//     struct book book1 = {"Cprogramming", "ABC", 130.00, 550};
//     printf("\n Title = %s", book1.title);
//     printf("\n Name = %s", book1.Author_name);
//     printf("\n Price = %.2f", book1.price);
//     printf("\n Pages = %d", book1.pages);
//     return 0;
// }

/* 
A)  Additional Features of Structures:-
1.  We can assign the values of a structure variable to another structure variable of the same type using the assignment operator.
2.  Structure can be nested within another structure.
3.  We can pass the structure variable to a function. We can pass the individual structure elements or the entire structure variable into the function as an argument.
4.  We can have a pointer pointing to a struct just like the way we can have a pointer pointing to an int, or a pointer pointing to a char.



B)  Where are structures useful?
Structures can be used for a variety of purposes like:

1.  Structures are used to store a large amount of data.
2.  They are used to send data to the printer.
3.  For placing the cursor at an appropriate position on screen, we can use structure.
4.  It can be used in drawing and floppy formatting.
5.  We use structures in finding out the list of equipment attached to the computer.

*/

//  Code as described/written in the video:                              // video no. 37

// Ye code do format me likho video dekh ke phir se 😁😁😁...
// Changes huye hai video me...
// #DOUBTS
// Video dekh ke likho...

#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;
// struct Student harry, ravi, shubham;

void print()
{
    printf("%s", harry.name);
}

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';
    strcpy(harry.name, "Harry Potter student of the year");
    strcpy(shubham.name, "Shubham Kumar");
    // printf("Harry got %d marks\n", harry.marks);
    // printf("Harry's name is: %s\n", harry.name);
    // printf("Shubham got %d marks\n", shubham.marks);
    // printf("Shubham's name is: %s\n", shubham.name);
    print();
    // Quick Quiz
    // print all the information of a given student

    return 0;
}
