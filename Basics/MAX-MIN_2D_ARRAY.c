#include <stdio.h>
int main()
{
    int n,m, i, j, temp;
    float a[20][20], max = 0, min = 0;
    printf("Enter your rows and columns : ");
    scanf("%d %d", &n,&m);
    if (n <= 20 && n > 0 && m <= 20 && m > 0)
    {

        for (i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
                printf("\nEnter element [%d][%d] : ", (i + 1),(j+1));
                scanf("%f", &a[i][j]);
            }
            
        }
        max = a[n-2][m-2];
        min = a[n-2][m-2];
        for(i=0;i<n;i++)
        {
            for ( j = 0; j < m; j++)
            {
                if (a[i][j]!=max && a[i][j]!=min)
                {
                    if(a[i][j]>max)
                    {
                        max=a[i][j];
                    }
                    if(a[i][j]<min)
                    {
                        min=a[i][j];
                    }
                }
                
            }
            
        }
        printf("\nMax number is : %f\nMin number is : %f", max, min);
    }
    else
        printf("\nOut of range !!");
    return 0;
}