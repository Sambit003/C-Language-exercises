// PRINT 1 PIE FULL SIN WAVE PATTERN

#include <stdio.h>
int main()
{
    int n, i, j, I, J;
    printf("TELL ME THE LIMIT::", n);
    scanf("%d", &n);
    if (n<1)
    {
        printf("ENTER VALID INPUT!!");
    }

    else
    {
        for (i = 1; i <= n; i++) // UPPER RECTANGLE PROGRAM WITH COLUMN EXPANSION
    {
        for (j = 1; j <= (2 * n); j++)
        {
            if (i >= j)
            {
                printf("*");
            }
            else if (i == n && (j - i) <= n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    

    for (I = n + 1; I <= (2 * n) - 1; I++) // LOWER RECTANGLE PROGRAM WITH COLUMN DIVISION
    {
        for (J = 1; J <= (2 * n); J++)
        {
            if (I - J >= 0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    }
    
    

    
    return 0;
}
