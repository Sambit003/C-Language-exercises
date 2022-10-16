/*#include <stdio.h>
int main()
{
    /*float a,b;
    printf("ENTER T NUMBERS:\n");
    scanf("%f %f",&a,&b);
    printf("RESULT IS AFTER ADDITION: %.2f",a+b);*/

    /*float a,b,c,avg;
    printf("ENTER THREE NUMBERS:\n");
    scanf("%f %f %f",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("AVERAGE IS: %f",avg);*/

    /*float a, b, c;
    printf("ENTER THREE NUMBERS:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (c < a || c < b)
    {
        if (a > b)
        {
            printf("Largest among thee is a=%f", a);
        }
        else if (b > a)
        {
            printf("Largest among thee is b=%f", b);
        }
        else
        {
            printf("Largest among thee is either a or b=%f", a);
        }
    }

    else if (b < a || b < c)
    {
        if (a > c)
        {
            printf("Largest among thee is a=%f", a);
        }
        else if (c > a)
        {
            printf("Largest among thee is c=%f", c);
        }
        else
        {
            printf("Largest among thee is either a or c=%f", a);
        }
    }

    else if (a < b || a < c)
    {
        if (b > c)
        {
            printf("Largest among thee is b=%f", b);
        }
        else if (c > b)
        {
            printf("Largest among thee is c=%f", c);
        }
        else
        {
            printf("Largest among thee is either b or c=%f", b);
        }
    }

    else
    {
        printf("ALL THREE NUMBERS ARE SAME!!");
    }*/

    /*float a, b, h;
    printf("ENTER BASE AND HEIGHT:\n");
    scanf("%f %f",&b, &h);
    a=(1.0/2.0)*b*h;
    printf("AREA OF THE TRIANGLE IS::%f",a);*/

    /*int year;
    printf("ENTER YEAR:\t");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        printf("%d is LEAPYEAR",year);
    }
    else
    {
        printf("%d is not a LEAPYEAR",year);
    }*/
    
    /*float marks;
    printf("Enter your marks out of 100: ");
    scanf("%f",&marks);
    if (marks<=0 || marks>100)
    {
        printf("GIVE CORRECT MARKS!!");
    }
    else
    {
            if (marks>=90)
        {
            printf("GOT A");
        }
        else if (marks>=80)
        {
            printf("GOT B");
        }
        else if (marks>=70)
        {
            printf("GOT C");
        }
        else if (marks>=60)
        {
            printf("GOT D");
        }
        else if (marks>=50)
        {
            printf("GOT E");
        }
        else
        {
            printf("GOT F");
        }
    }*/






#include<stdio.h>
int main()
{
    float a,b;
    printf("--->");
    scanf("%f %f",&a,&b);
    printf("RESULT: %.2f",(a+b));
    return 0;
}
