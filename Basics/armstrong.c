#include<stdio.h>
int main()
{
    int n,c=0,n1,rem,sum=0,p,j;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    n1=n;
    while (n>0)
    {
        n=n/10;
        c++;
    }
    n=n1;
    for (int i = 1; i <= c; i++)
    {
        rem=n%10;
        n=n/10;
        p=1;
        for (int j = 1; j <=c; j++)
        {
            p=p*rem;
        }
        sum=sum+p;
    }
    
    if(sum==n1)
    {
        printf("\n%d is ARMSTRONG NUMBER",n1);
    }
    else
    {
        printf("\n%d is not ARMSTRONG NUMBER",n1);
    }
  
    return 0;
}

