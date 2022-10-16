//MULTIPLICATION TABLE
#include <stdio.h>
int main()
{
    int n, i, j, mul = 5, v;
    printf("UPTO::", n);
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        v = mul * i;
        printf("\n5 \tX \t%d\t=\t%d", i, v);
    }
    return 0;
}
