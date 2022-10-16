/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,rem,sum=0;
    printf("-->");
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for (int i=1; i<=4; i++) 
    {
        if (n>10) 
        {
        rem=(n%10);
        sum=sum+rem;
        }
        n=(n/10);
        if (n<10)
        {
        sum=sum+n;
        }
        
    }
    
    printf("%d",sum);
    return 0;
}*/

