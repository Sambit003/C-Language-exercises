#include <stdio.h>
int main()
{
    int arr1[10][10], arr2[10][10], r1, c1, r2, c2;
    printf("ROWS , COLUMNS FOR arr1:\n");
    scanf("%d %d", &r1, &c1);
    printf("TAKING INPUTS FOR arr1.......\n");

    for (int i1 = 1; i1 <= r1; i1++)
    {
        for (int j1 = 1; j1 <= c1; j1++)
        {
            scanf("%d %d", &arr1[i1], &arr1[j1]);
        }
    }
    printf("\nMATRIX 01 IS:");

    for (int i1 = 1; i1 <= r1; i1++)
    {
        for (int j1 = 1; j1 <= c1; j1++)
        {
            printf("%d %d", arr1[i1], arr1[j1]);
        }
        printf("\n");
    }

    
    printf("ROWS , COLUMNS FOR arr2:\n");
    scanf("%d %d", &r2, &c2);
    printf("TAKING INPUTS FOR arr2.......\n");

    for (int i2 = 1; i2 <= r2; i2++)
    {
        for (int j2 = 1; j2 <= c2; j2++)
        {
            scanf("%d %d", &arr2[i2], &arr2[j2]);
        }
    }
    printf("\nMATRIX 02 IS:");

    for (int i2 = 1; i2 <= r2; i2++)
    {
        for (int j2 = 1; j2 <= c2; j2++)
        {
            printf("%d %d", arr2[i2], arr2[j2]);
        }
        printf("\n");
    }

    return 0;
}
