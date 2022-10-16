// SMALL DATABASE(4D-ARRAY)
/*#include<stdio.h>
int main()
{
    int result[4][4]={{80,90,70,95},{80,90,70,95},{80,90,70,95},{80,90,70,95}};
    char person[1][4]={'A','B','C','D'};
    for ( int p = 0; p < 1; p++)
    {
        for (int P = 0; P < 4; P++)
        {
            printf("%c\t",person[p][P]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");

    }


    return 0;
}*/

// INSERTION OF ELEMENTS IN AN EMPTY ARRAY
// 1D-ARRAY
/*#include<stdio.h>
int main()
{
    //int insert[4];  //STATIC MEMORY ALLOCATION

    int n,insert[n],sum=0;
    printf("SET THE LIMIT::");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("ENTER NO %d ELEMENT:",i);
        scanf("%d",&insert[i]);
    }

    printf("RESULT:---------\n");

    for ( int i = 1; i <= n; i++)
    {
        printf("%d\t",insert[i]);
        //sum+=insert[i];
    }

    //printf("\nSUM=%d",sum);

    return 0;
}*/

// 2D-ARRAY
/*#include<stdio.h>
int main()
{

    //Two dimensional array
    int Matrice[3][3];
    printf("This Program will print no. from 1-9 in matrice form : \n\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Enter no. (1-9) : ");
            scanf("%d", &Matrice[i][j]);
        }
    }
    printf("\n\n\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d\t", Matrice[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n So that's the matrice form of no from 1-9");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n, i, j, temp;
    float a[20], max = 0, min = 0;
    printf("Enter your range : ");
    scanf("%d", &n);
    if (n <= 20 && n > 0)
    {

        for (i = 0; i < n; i++)
        {
            printf("\nEnter element %d : ", (i + 1));
            scanf("%f", &a[i]);
        }
        max = a[0];
        min = a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        printf("\nSORTED ORDER::");
        for (j = 0; j < (n - 1); j++)
        {
            for (i = 0; i < (n - j-i); i++)
            {
                if (a[i] > a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }
        for ( i = 0; i < n; i++)
        {
            printf("\n\t%d",a[i]);
        }
        
        //printf("\nMax number is : %f\nMin number is : %f", max, min);
    }
    else
        printf("\nOut of range !!");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    float a[20],sum=0,avg;
    int n;
    printf("ENTER THE RANGE : ");
    scanf("%d",&n);
    if (n <= 20 && n > 0)
    {

        for ( int i = 0; i < n; i++)
        {
            printf("\nEnter element %d : ", (i + 1));
            scanf("%f", &a[i]);
            sum=sum+a[i];
            avg= sum / n;
        }
        printf("\nSUM IS:%f",sum);
        printf("\nAVERAGE IS:%f",avg);
        
    }
    else
        printf("\nOut of range !!");
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    float x[20];
    printf("RANGE : ");
    scanf("%d",&n);
    if(n<=20 && n>0)
    {
        for(i=0;i<n;i++)
        {
            printf("\nEnter element %d : ", (i + 1));
            scanf("%f",&x[i]);
        }
        for(j=0;j<n-1;j++)
        {
            for(i=0;i<(n-1-j);i++)
            {
                if(x[i]>x[i+1])
                {
                    temp=x[i];
                    x[i]=x[i+1];
                    x[i+1]=temp;
                }
            }
        }
        printf("\nSORTED ARRAY : ");
        for(i=0;i<n;i++)
        {
            printf(" %9.4f",x[i]);
        }
    }
    else
        printf("\n\tOut of range !!");
    return 0;
}