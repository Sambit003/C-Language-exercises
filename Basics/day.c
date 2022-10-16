//PREDICTION OF DAY BY NUMBER
#include<stdio.h>
int main()
{
    int num;
    printf("ENTER THE NO::",num);
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("\nMONDAY");
        break;

    case 2:
        printf("\nTUESDAY");
        break;

    case 3:
        printf("\nWEDNESDAY");
        break;

    case 4:
        printf("\nTHURSDAY");
        break;

    case 5:
        printf("\nFRIDAY");
        break;

    case 6:
        printf("\nFRIDAY");
        break;

    case 7:
        printf("\nSATURDAY");
        break;
    
    default:
        printf("\nSUNDAY");
        break;
    }

    return 0;
}
