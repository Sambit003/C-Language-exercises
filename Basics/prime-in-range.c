#include <stdio.h>
int main()
{
    int j, n1, n2;
    printf("Enter the range:\n");
    scanf("%d%d", &n1, &n2);
    printf("\nPRIME NUMBERS IN THIS RANGE ARE: \n");
    for (j = n1; j <= n2; j++)
    {
        if (j == 1)
            continue;
        if (j == 2)
        {
            printf("\t%d", j);
        }

        if (j > 2 && j % 2 != 0)
        {
            if (j == 3 || j == 5 || j == 7)
            {
                printf("\t%d", j);
            }

            if (j % 3 != 0 && j % 5 != 0 && j % 7 != 0)
            {
                printf("\t%d", j);
            }
        }
    }
    return 0;
}