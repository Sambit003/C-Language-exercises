// AREA OF A TRIANGLE BY FUNCTION

/*#include<stdio.h>
float areatrio(float b, float h);               //DECLERATION
int main()
{
    float b,h;
    printf("ENTER THE BASE AND HEIGHT::\n",b,h);
    scanf("%f %f",&b,&h);
    areatrio(b,h);                              //FUNCTION CALL
    return 0;
}

float areatrio(float b, float h)
{
    float A;
    A=(1/2.0)*(b*h);
    printf("THE RESULT IS::%f",A);              //FUNCTION DEFINITION
    return A;
}
*/

// SERIES:: 1/1^2 + 1/2^2 + 1/3^2+............+1/n^2
#include <stdio.h>

float series(int n);       //DECLARATION

/*float series(int n)    //DEFINITION + DECLARATION
{
     int i, p;
    float sum = 0.0;
    for (i = 1; i <= n; i++)
    {
        p = i;
        p = p * i;
        sum = sum + (1.0 / p);
    }
    printf("SERIES IS::\t1/1^2 + 1/2^2 + 1/3^2+............+1/n^2");
    printf("\nRESULT IS::\t%f", sum);
    return sum;

}*/

int main()
{
    int n;
    printf("\nENTER THE LIMIT::\t");
    scanf("%d", &n);
    series(n);                      //FUNCTION CALL
    return 0;
}

float series(int n)                 //FUNCTION DEFINITION
{
    int i, p;
    float sum = 0.0;
    for (i = 1; i <= n; i++)
    {
        p = i;
        p = p * i;
        sum = sum + (1.0 / p);
    }
    printf("SERIES IS::\t1/1^2 + 1/2^2 + 1/3^2+............+1/n^2");
    printf("\nRESULT IS::\t%f", sum);
    return sum;
}

