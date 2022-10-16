// LARGEST-SMALLEST BY ARRAY
#include <stdio.h>
int main()
{
    int n, store[n], small, large, small_pos, large_pos;
    printf("HOW MANY NUMBERS DO YOU WANT TO STORE::");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("ENTER NO %d ELEMENT:", i);
        scanf("%d", &store[i]);
    }

    printf("\nRESULT:-----\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("store[%d]=%d\n", i, store[i]);
        large=store[n-1];
        large_pos=(n-1);
        small=store[0];
        small_pos=0;
    }
    printf("\n\nLET ASSUME THE LARGEST NUMBER AS::%d\n", large);
    printf("LET ASSUME THE SMALLEST NUMBER AS::%d\n\n", small);

    for (int i = 0; i < n; i++)
    {
       if (store[i]<store[0])
       {
           small=store[i];
           small_pos=i;
       }

       if (store[i]>store[n-1])
       {
           large=store[i];
           large_pos=i;
           
       }
    }
    printf("THE ACTUAL SMALLEST IS store[%d]=%d\n", small_pos, small);
    printf("\nTHE ACTUAL LARGEST IS store[%d]=%d\n", large_pos, large);

    return 0;
}
