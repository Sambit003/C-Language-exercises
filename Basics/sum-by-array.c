#include<stdio.h>
int main()
{
    int n,a[n],sum=0;
    printf("UPTO::");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    
   for (int i = 0; i <n; i++)
   {
       sum=sum+a[i];
   }
   
    printf("SUM:%d",sum);
    return 0;
}
