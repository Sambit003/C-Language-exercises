//BOX PATTERN

/*  **********
    **********
    **********
    **********
    **********
*/
/*#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("UPTO HOW NO ROW::",n);
    scanf("%d",&n);
    printf("UPTO HOW NO COLUMN::",m);
    scanf("%d",&m);
    for ( i = 1; i <= n; i++)
    {
        printf("\n*");
        for ( j = 1; j <= (m-1); j++)
        {
            printf("\t*");
        }
        
    }
    
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i,j,k,row=0;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for(i=1,k=1;i<=row;i++)
    {
        printf("\n\t");
        for(j=1;j<=i;j++,k++)
        {
            printf("%5d",k);
            
        }
    }
    return 0;
}







