#include <stdio.h>
#include <stdlib.h>
/*
7
   *
  ***
 *****
*******
 *****
  ***
   *
*/
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int i,j,s,e;
    s=(n/2)+1;
    e=(n/2)+1;
    for(i=1;i<=(n/2)+1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<s)
            {
                printf(" ");
            }
            else if(j>e)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        s--;
        e++;
        printf("\n");
    }
    s+=2;
    e-=2;
    for(i=1;i<=(n/2);i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<s)
            {
                printf(" ");
            }
            else if(j>e)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        s++;
        e--;
    }
}



