/*#include<stdio.h>
int main()
{
    int n,r,c;
    printf("ENTER ROW NUMBER:");
    scanf("%d",&n);
    for ( r = 1; r <= n; r++)
    {
        printf("\n*");
        for ( c = 0; c < (i-1); c++)
        {
            printf("\t*");
        }
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n,r,c;
    printf("ENTER COLUMN NUMBER:");
    scanf("%d",&n);
    for ( c = 1; c <=n; c++)
    {
        for ( r = 0; r<=(c-1); r++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}

