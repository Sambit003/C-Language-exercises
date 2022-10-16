//UNITS OF TEMPARATURE CONVERSION BY CONDITIONAL STATEMENTS
#include <stdio.h>
int main()
{
    float z, x, y;
    char n;
    printf("TYPE THE MODE OF CONVERSION:");
    scanf("%c", &n);
    
    if (n == 'C' || n=='c')
    {
        printf("TEMPERATURE TO CHANGE::");
        scanf("%f",&z);
        x = (5.0 / 9) * (z - 32);
        printf("CONVERTING TO CELSIUS....");
        printf("\nSO THE CELSIUS GRADE IS::%f", x);
    }

    else if (n == 'F' || n=='f')
    {
        printf("TEMPERATURE TO CHANGE::");
        scanf("%f",&z);
        y = (9.0 / 5) * z + 32;
        printf("CONVERTING TO FARENHITE....");
        printf("\nSO THE FARENHITE GRADE IS::%f", y);
    }

    else
    {
        printf("\nENTER JUSTIFIED INPUT!!");
    }
    return 0;
}
