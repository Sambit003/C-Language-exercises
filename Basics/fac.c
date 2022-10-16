// FACTORIAL UPTO A LIMIT

//POSITIVE PROGRESSION
/*#include <stdio.h>
int main()
{
    int fac, i, fac1;
    printf("UPTO WHICH LIMIT YOU WANT TO MAKE FACTORIAL::", fac);
    scanf("%d", &fac);
    fac1=(fac-1);
    for ( i = 1; i <= fac1; i++)
    {
        fac=fac*i;
        
    }
    printf("FACTORIAL IS:%d",fac);
    


    return 0;
}*/


//NEGATIVE PROGRESSION
/*#include <stdio.h>
int main()
{
    int fac=1, i, n;
    printf("UPTO WHICH LIMIT YOU WANT TO MAKE FACTORIAL::", n);
    scanf("%d", &n);
    for ( i = n; i>1; i--)
    {
        fac=fac*i;
        
    }
    printf("FACTORIAL IS:%d",fac);
    


    return 0;
}*/

//USING RECURSION
#include<stdio.h>
int factorial(int x)
{
    if (x==0 || x==1)
    {
        return 1;
    }
    else if(x>0)
    {
        return(x*factorial(x-1));
    }
    else
    {
        return(x*factorial(x+1));
    }
}    

int main()
{
    int num;
    printf("FACTORIAL OF:");
    scanf("%d",&num);
    printf("FACTORIAL OF %d IS:%d",num,factorial(num));
    return 0;
}
