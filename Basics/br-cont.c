/*#include<stdio.h>
int main()
{
    int a,b,o;
    printf("values of a and b are : ");
    scanf("%d %d",&a,&b);
    printf("Enter your operation : ");
    scanf("%d",&o);
    switch (o)
    {
    case 1:
        printf("Sum of %d and %d is = %d",a,b,(a+b));
        break;

    case 2:
        printf("Subtraction of %d and %d is = %d",a,b,(a-b));
        break;


    default:
        printf("Suggest Correct operation!!");
        break;
    }
    
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n, i, j, mul = 5, v;
    printf("UPTO::", n);
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i<6)
        {
            v = mul * i;
            printf("5 \tX \t%d\t=\t%d\n", i, v);
            continue;
        }
        printf("continue statement brings me here!!\n");
        break;
    }
    printf("break statement brings me here!!");
    return 0;
}*/

/*#include<stdio.h>
static int y=8; //GLOBAL VARIABLE 
int main()
{
    static int x=5; // LOCAL VARIABLE
    printf("Sum of %d and %d is = %d",x,y,(x+y));
    return 0;
}*/

#include<stdio.h>
int main()
{
    auto int a,b;
    printf("values of a and b are : ");
    scanf("%d %d",&a,&b);
    printf("Sum of %d and %d is = %d",a,b,(a+b));
    return 0;
}