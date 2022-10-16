#include<stdio.h>
int main()
{
    int n,temp,rem,rev=0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    //printf("sum=%d",sum);
    
    if(rev==n)
    {
        printf("%d is PALINDROME NUMBER",n);
    }
    else
    {
        printf("%d is not PALINDROME NUMBER",n);
    }
  
    return 0;
}