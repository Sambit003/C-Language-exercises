//PRINT 

/*                                                        1 1
                                                        2 2 2 2
                                                      3 3 3 3 3 3
*/
#include<stdio.h>
int main()
{
    int n,i,j,I,J;
    printf("ENTER THE LIMIT::");
    scanf("%d",&n);
    
        for ( i = 1; i <=n ; i++)
        {
            for ( j = 1; j <=(2*n); j++)
            {
                if (j==n && j-i>=0 && j-i<=(n-1) || j==n+1 && j-i>=1 && j-i<=n)
                {
                    printf("*");
                }
                else if (j+i<=(2*n)-1 && j+i>=n+1 && j<=n-1 || j>=(n+2) && j-i<=n && j-i>=2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                
            }
            printf("\n");
        }
    return 0;
}
