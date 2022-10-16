// SUM OF THE ROWS & DIAGONAL ELEMENTS OF A MATRIX
#include <stdio.h>
int main()
{
    int n;
    float mat[2][2],sum,dia=0;
    printf("GIVE INPUTS::\n");
    for (int r = 0; r < 2; r++)
    {
       
        for (int c = 0; c < 2; c++)
        {
            scanf("%f", &mat[r][c]); 
        }
        
    }

    printf("THE MATRIX IS::\n");

    for (int r = 0; r < 2; r++)
    {
       
        for (int c = 0; c < 2; c++)
        {
            printf("%f\t", mat[r][c]); 
        }
        printf("\n");
    }

    printf("\n");
    
    for (int r = 0; r < 2; r++)
    {
        sum=0;
        for (int c = 0; c < 2; c++)
        {
            sum=sum+mat[r][c];
        }
        printf("SUM OF THE ELEMENTS OF NO %d ROW IS:%f",(r+1),sum);   //SUM OF EACH ROW
        printf("\n");
    }

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            if (r==c)
            {
                dia=dia+mat[r][c];
            }
            
        }
    }
    printf("SUM OF THE DIAGONAL ELEMENTS IS:%f",dia);   //SUM OF DIAGONAL ELEMENTS

    
    return 0;
}
