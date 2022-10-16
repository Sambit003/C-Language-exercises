#include <stdio.h>
int main()
{

    int x;
    printf("PUT THE VALUE OF X:");
    scanf("%d", &x);
    if (x == 4)
    {
        printf("AS YOU HAVE PASSED IN BOTH SCIENCE AND MATHS, YOU WILL GET RUPESS 45 AS GIFT!!");
    }
    else if (x < 4 && x > 1)
    {
        printf("AS YOU HAVE PASSED IN  SCIENCE ONLY, YOU WILL GET RUPESS 20 AS GIFT!!");
    }
    else if (x <= 1)
    {
        printf("AS YOU HAVE PASSED IN  MATHS ONLY , YOU WILL GET RUPESS 25 AS GIFT!!");
    }
    else
    {
        printf("NO GIFT IS ALLOTTED FOR YOU!!");
    }
    return 0;
}