#include<stdio.h>
int main()
{
    int num;
    int p=0;
    printf("\nENTER -1 TO EXIT....");
    printf("\n\tENTER YOUR NUMBER::",num);
    scanf("%d",&num);
    while (num != -1)
    {
        if(num>0)
        {
            p++;
        }
        else
        {
            p=0;
        }
        
        printf("\n\tENTER YOUR NUMBER::",num);
        scanf("%d",&num);

    }
    printf("\nNO OF POSITIVE NUMBERS:%d",p);
        

    return 0;
}
