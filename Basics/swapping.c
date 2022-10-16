// SWAPPING OR IMPLICIT TYPECASTING

// BY DECLARING ANOTHER VARIABLE 'Z' TO SWAP
/*#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter x:\t",x);
    scanf("%d",&x);

    printf("Enter y:\t",y);
    scanf("%d",&y);

    printf("\nSWAPPING RESULTS....");

    z=x;
    x=y;
    y=z;

    printf("\nNow x:%d",x);
    printf("\nNow y:%d",y);
    return 0;
}

//BY THE HELP OF OPERATORS
    //1ST---BY 'ADDITION'-'SUBTRACTION' METHOD
    #include<stdio.h>
    int main()
    {
        int x,y;
        printf("Enter x:\t",x);
        scanf("%d",&x);

        printf("Enter y:\t",y);
        scanf("%d",&y);

        printf("\nSWAPPING RESULTS....");

        x=x+y;
        y=x-y;
        x=x-y;

        printf("\nNow x:%d",x);
        printf("\nNow y:%d",y);
        return 0;
    }

    //2ND---BY 'MULTIPLICATION'-'DIVISION' METHOD
    #include<stdio.h>
    int main()
    {
        int x,y;
        printf("Enter x:\t",x);
        scanf("%d",&x);

        printf("Enter y:\t",y);
        scanf("%d",&y);

        printf("\nSWAPPING RESULTS....");

        x=x*y;
        y=x/y;
        x=x/y;

        printf("\nNow x:%d",x);
        printf("\nNow y:%d",y);
        return 0;
    }*/

/*#include <stdio.h>
int main()
{
    float x, y, z;
    char p;
    printf("Enter x::\t", x);
    scanf("%f", &x);

    printf("Enter y::\t", y);
    scanf("%f", &y);

    printf("SO, IN WHICH WAY YOU WANT TO SWAP??",p);
    scanf("%c", &p);

    if (p == 'N')
    {
        printf("\nSWAPPING RESULTS....");

        z = x;
        x = y;
        y = z;

        printf("\nNow x:%d", x);
        printf("\nNow y:%d", y);
    }

    else if (p == 'A')
    {
        printf("\nSWAPPING RESULTS....");

        x = x + y;
        y = x - y;
        x = x - y;

        printf("\nNow x:%d", x);
        printf("\nNow y:%d", y);
    }

    else if (p == 'M')
    {
        printf("\nSWAPPING RESULTS....");

        x = x * y;
        y = x / y;
        x = x / y;

        printf("\nNow x:%d", x);
        printf("\nNow y:%d", y);
    }

    else
    {
        printf("\n x=%f,y=%f", y, x);
        printf("\nBUT THIS IS LOGICALLY NOT CONSIDERABLE!!!!");
    }

    return 0;
}*/

/*
 printf("SO, IN WHICH WAY YOU WANT TO SWAP??");
        scanf("%c", &p);

        if (p == 'N')
        {
            printf("\nSWAPPING RESULTS....");

            z = x;
            x = y;
            y = z;

            printf("\nNow x:%d", x);
            printf("\nNow y:%d", y);
        }

        else if (p == 'A')
        {
            printf("\nSWAPPING RESULTS....");

            x = x + y;
            y = x - y;
            x = x - y;

            printf("\nNow x:%d", x);
            printf("\nNow y:%d", y);
        }

        else if (p == 'M')
        {
            printf("\nSWAPPING RESULTS....");

            x = x * y;
            y = x / y;
            x = x / y;

            printf("\nNow x:%d", x);
            printf("\nNow y:%d", y);
        }

*/


/*#include<stdio.h>
int swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nNow x:%d",x);
    printf("\nNow y:%d",y);
}
int main()
{
    int x,y;
    printf("Enter x:\t",x);
    scanf("%d",&x);

    printf("Enter y:\t",y);
    scanf("%d",&y);

    printf("\nSWAPPING RESULTS....");
    swap(x,y);
    return 0;
}*/

#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x,y;
    printf("Enter x:\t",x);
    scanf("%d",&x);

    printf("Enter y:\t",y);
    scanf("%d",&y);

    printf("\nSWAPPING RESULTS....");
    swap(&x,&y);
    printf("\nNow x:%d",x);
    printf("\nNow y:%d",y);
    return 0;
}