// Code as described/written in the video of HARRY

#include <stdio.h>

int main()
{
    // printf("Hello World\n");
    int marks[2][4] = {{45, 234, 2, 3}, {3, 2, 3, 3}};                   /* 2D ARRAY */               // 3rd step

    // for (int i = 0; i < 4; i++)               /* 1D ARRAY  by using direct initilization through a one line */    // 2nd step
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            // printf("%d ", marks[i][j]);            // for printing matrices                     // 4th step of video
        }
        // printf("\n");                              // for printing matrices
    }


/* 1D ARRAY */                                      // program start from here 1st step
    // int marks[4];
    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 4;
    // marks[1] = 24;
    // marks[2] = 34;
    // marks[3] = 44;
    // printf("Marks of student 2 is %d\n", marks[1]);
    return 0;
}
