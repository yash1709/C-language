/* C Language Travel Agency Manager :


Instructions:-
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms

Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.
Your program should print details of the drivers in a beautiful fashion.
For this task, you have to use Structure only. These four inputs: name, driving license number, route, and km information will be struct members.


*/

//  Code as described/written in the Harry's video :

#include <stdio.h>
struct Driver
{
    /* Data */
    char name[35];
    char dlNo[45];
    char route[50];
    int kms;
};

int main()
{
    struct Driver d1, d2, d3;
    // for driver no 1
    printf("Enter the details of the Driver No. 1 :\n ");
    printf("Enter the name of first Driver\n ");
    scanf("%s", &d1.name);

    printf("Enter the dlno of first Driver\n ");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first Driver\n ");
    scanf("%s", &d1.route);

    printf("Enter the number of Kms of first Driver\n ");
    scanf("%s", &d1.kms);

    // for driver no 2
    printf("Enter the details of the Driver No. 2 :\n ");
    printf("Enter the name of second Driver\n ");
    scanf("%s", &d2.name);

    printf("Enter the dlno of second Driver\n ");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of second Driver\n ");
    scanf("%s", &d2.route);

    printf("Enter the number of Kms of second Driver\n ");
    scanf("%s", &d2.kms);

    // for driver no 3
    printf("Enter the details of the Driver No. 3 :\n ");
    printf("Enter the name of third Driver\n ");
    scanf("%s", &d3.name);

    printf("Enter the dlno of third Driver\n ");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of third Driver\n ");
    scanf("%s", &d3.route);

    printf("Enter the number of Kms of third Driver\n ");
    scanf("%s", &d3.kms);

    printf("\n\n\n******Printing Information of these drivers:*******\n");
    printf("For driver No 1 :\nName is %s\n", d1.name);
    printf("DL number is %s\n ", d1.dlNo);
    printf("Route is %s\n ", d1.route);
    printf("Kms is %d\n ", d1.kms);

    printf("For driver No 2 :\nName is %s\n", d2.name);
    printf("DL number is %s\n ", d2.dlNo);
    printf("Route is %s\n ", d2.route);
    printf("Kms is %d\n ", d2.kms);

    printf("For driver No 3 :\nName is %s\n", d3.name);
    printf("DL number is %s\n ", d3.dlNo);
    printf("Route is %s\n ", d3.route);
    printf("Kms is %d\n ", d3.kms);

    return 0;
}
