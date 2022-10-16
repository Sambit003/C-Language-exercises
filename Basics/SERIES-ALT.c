// PRINT    1/1!  -  2^2/2!  +   3^3/3!  -  4^4/4!   +   5^5/5!
#include <stdio.h>
int main()
{
    int n, i, j, k, fact = 1;
    float sum = 0, result, p = 1, od, eve;
    printf("UPTO HOW MUCH::", n);
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            p = (p * j);
        }

        for (k = fact; k > 1; k--)
        {
            fact = (float)(fact * k); // FACTORIAL PART
        }
        result = (p / fact);

        if (i % 2 != 0)
        {
            sum = sum + result;
        }
        else
        {
            sum = sum - result;
        }
    }
    printf("\nRESULT IS::%f", sum);

    return 0;
}
