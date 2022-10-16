#include <stdio.h>
int main()
{
    char ch, Case1, Case2;
    printf("Enter the character:", ch);
    scanf("%c", &ch);
    Case1 = (ch > 'A' && ch < 'Z') ? (ch - '32') : 0;
    Case2 = (ch > 'a' && ch < 'z') ? (ch + '32') : 0;
    if (Case1 = 'TRUE')
    {
        printf("CONVERTED UPPERCASE IS:%c", Case1);
    }
    else if (Case2 = 'TRUE')
    {
        printf("CONVERTED LOWERCASE IS:%c", Case2);
    }
    else
    {
        printf("DO THE PROGRAM AGAIN!!");
    }
    return 0;
}
