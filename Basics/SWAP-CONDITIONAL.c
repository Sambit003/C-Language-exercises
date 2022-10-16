//SWAPPING OR IMPLICIT TYPECASTING BY CONDITIONAL STATEMENTS
#include <stdio.h>
int main()
{

    float x, y, z;
    char w;

    printf("Enter x::\t", x);
    scanf("%f", &x);

    printf("Enter y::\t", y);
    scanf("%f", &y);

    printf("SO, IN WHICH WAY YOU WANT TO SWAP::", w);
    scanf("%s", &w);


    if (w == 'n' || w == 'N')
    {
        printf("\nSWAPPING RESULTS....");

        z = x;
        x = y;
        y = z;

        printf("\nNow x:%f", x);
        printf("\nNow y:%f", y);
    }

    else if (w == 'a' || w == 'A')
    {
        printf("\nSWAPPING RESULTS....");

        x = x + y;
        y = x - y;
        x = x - y;

        printf("\nNow x:%f", x);
        printf("\nNow y:%f", y);
    }

    else if (w == 'm' || w == 'M')
    {
        printf("\nSWAPPING RESULTS....");

        x = x * y;
        y = x / y;
        x = x / y;

        printf("\nNow x:%f", x);
        printf("\nNow y:%f", y);
    }

    else if (w == 'X')
    {
        printf("\nx=%f,\ny=%f", y, x);
        printf("\nBUT THIS IS INVALID!!");
    }

    else
    {
        printf("\nNOT POSSIBLE!!");
    }

    return 0;
}
