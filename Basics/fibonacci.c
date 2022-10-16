// FIBONACCI SERIESS: 0 1 1 2 3 5 8............

//BY USING FOR LOOP
#include <stdio.h>
int main()
{
    int c1 = 0, c2 = 1, c, n, i;
    printf("TELL ME THE LIMIT::");
    scanf("%d", &n);
    printf("FIBONACCI SERIES::\n");
    printf("%d\t%d\t", c1,c2);
    for (i = 3; i <= n; i++)
    {
        c = c1 + c2;
        printf("%d\t", c);
        c1 = c2;
        c2 = c;
    }

    return 0;
}

//BY USING WHILE LOOP
/*#include <stdio.h>
int main()
{
    int c1 = 0, c2 = 1, c, n, i=3;
    printf("TELL ME THE LIMIT::", n);
    scanf("%d", &n);
    printf("\n1ST TERM IS :%d", c1);
    printf("\n2ND TERM IS :%d", c2);
    while (i <= n)
    {
        c = c1 + c2;
        printf("\nTHE NEXT TERM IS:%d", c);
        c1 = c2;
        c2 = c;
        i++;
    }
    return 0;

}*/