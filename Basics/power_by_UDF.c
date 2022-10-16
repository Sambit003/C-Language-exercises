//POWER CALCULATION BY USER-DEFINED FUNCTION
#include<stdio.h>
int power_func(int a, int b)
{
    int p=1;
    for (int i = 1; i <= b;i++)
    {
        p=p*a;
    }
    return p;
}
int main()
{
    int n,q,result;
    printf("NUMBER & POWER ARE:\n");
    scanf("%d %d",&n,&q);
    result=power_func(n,q);
    printf("%d TO THE POWER %d IS = %d",n,q,result);
    return 0;
}
