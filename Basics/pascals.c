//PASCALS TRIANGLE
#include<stdio.h>
int main()
{
    int n,n1,i,j,s,d;
    printf("UPTO::");
    scanf("%d",&n);
    n1=(n-1);
    for (int i = 0; i <=n1; i++)
    {
        for (int j = 0; j <=2*n1; j++)
        {
            if (j+i==n1||j-i==n1)
            {
                printf("1");
            }
            else if (j-i==2 & i==2)
            {
                printf("2");
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
