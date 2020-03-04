#include <stdio.h>
#include <stdlib.h>
/*
7
*
**
***
****
***
**
**
*/
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int i,j;
    for(i=1;i<=(n/2)+1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

