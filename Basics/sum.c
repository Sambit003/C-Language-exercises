/// SUM & AVERAGE UPTO A LIMIT OF NUMBERS

/*///BY USING FOR LOOP
#include<stdio.h>
int main()
{
    int n,i;
    float avg,sum=0;
    printf("UPTO HOW MANY NUMBERS YOU WANT TOPRINT::",n);
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
        avg=sum/n;


    }
    printf("SUM=%d",(int)sum);
    printf("\nAVERAGE=%f",avg);
    return 0;
}*/

// BY USING WHILE LOOP
#include <stdio.h>
int main()
{
    int n, i = 1;
    float avg, sum = 0;
    printf("UPTO HOW MANY NUMBERS YOU WANT TOPRINT::", n);
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        avg = sum / n;
        i++;
    }
    printf("SUM=%d", (int)sum);
    printf("\nAVERAGE=%2.1f", avg);
    return 0;
}