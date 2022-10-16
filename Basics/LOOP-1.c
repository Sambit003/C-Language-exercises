// PRINT UPTO A LIMIT OF NUMBERS

// BY USING FOR LOOP
/*#include <stdio.h>
int main()
{
    int n, sum = 0;
    float avg;
    printf("UPTO HOW MANY NUMBERS::", n);
    scanf("%d", &n);
    for (int i=1 ; i <= n; i++)
    {
        sum = sum + i;
    }
    avg = (float)sum /  n;
    printf("SUM UPTO %d IS=%d", n, sum);
    printf("\nAVERAGE UPTO %d IS=%f", n, avg);
    return 0;
}*/

// BY USING WHILE LOOP
/*#include <stdio.h>
int main()
{
    int n, i = 1,sum=0;
    float avg;
    printf("UPTO HOW MANY NUMBERS YOU WANT TOPRINT::", n);
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    avg = (float)sum /  n;
    printf("SUM UPTO %d IS=%d", n, sum);
    printf("\nAVERAGE UPTO %d IS=%f", n, avg);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n, sum = 0;
    float avg;
    printf("UPTO HOW MANY NUMBERS::", n);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (2*i-1);
    }
    avg = (float)sum /  n;
    printf("SUM UPTO %d IS=%d", n, sum);
    printf("\nAVERAGE UPTO %d IS=%f", n, avg);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n, sum = 1,t=1;
    //float avg;
    printf("UPTO HOW MANY NUMBERS::", n);
    scanf("%d", &n);
    for (int i = 1 ; i <=(n-1);i++)
    {
        sum=sum+(2*i+1)*t;
        t=(-t);
    }
    //avg = (float)sum /  n;
    printf("SUM UPTO %d IS=%d", n, sum);
    //printf("\nAVERAGE UPTO %d IS=%f", n, avg);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n,p;
    float sum=1.0;
    //float avg;
    printf("UPTO HOW MANY NUMBERS::", n);
    scanf("%d", &n);
    for (int i = 2 ; i <=n;i++)
    {
        p=1;
        for (int j = (i+1); j > 1; j--)
        {
            p=p*j;
        }
        sum=sum+((float)i/p);
    }
    //avg = (float)sum /  n;
    printf("SUM UPTO %d IS=%f", n, sum);
    //printf("\nAVERAGE UPTO %d IS=%f", n, avg);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int n,i=900, sum = 0;
    float avg;
    printf("UPTO HOW MANY NUMBERS::", n);
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);
    avg = (float)sum / n;
    printf("SUM UPTO %d IS=%d", n, sum);
    printf("\nAVERAGE UPTO %d IS=%f", n, avg);
    return 0;
}