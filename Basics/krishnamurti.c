#include<stdio.h>
int krishnamurthi( int x )
{
    int temp,sum=0,p,rem;
    temp=x;
    while (temp!=0)
    {
        rem=temp%10;
        p=1;
        for ( int j = rem; j >1; j--)
        {
            p=p*j;
        }
        sum=sum+p;
        temp=temp/10;
    }
    if (sum==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,status;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    //status=krishnamurthi(n);
    if (/*status*/ krishnamurthi(n)==1)
    {
        printf("%d is KRISHNAMURTHI NUMBER!!",n);
    }
    else 
    {
        printf("%d is not KRISHNAMURTHI NUMBER!!",n);
    }
    return 0;
}

