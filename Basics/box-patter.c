/*
    2 2 2
    2 1 2
    2 2 2
 */


#include<stdio.h>
#include<math.h>
int main()
{
    int n,l;
    printf("---->");
    scanf("%d", &n);
    l=((2*n)-1);
    for (int i = 1; i <=l; i++)
    {
        for (int j = 1; j <=l; j++)
        {
            if (i+j==(2*n) && i==n)
            {
               printf("1");
                
            }
            else
            {
                                                                /*
                                                                  1 ROTATOR FOR LOOP,
                                                                  1 ROW+1 COLUMN FOR LOOP,
                                                                  1 VALUE INCREMENTER FOR LOOP,
                                                                */
                for (int  R = 1; R <=(n-1); R++)
                {
                    for (int I = 0; i < count; i++)
                    {
                        /* code */
                    }
                    
                }
                
            }
        printf("\n");
        }
    return 0;
}
