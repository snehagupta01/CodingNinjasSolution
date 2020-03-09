#include <stdio.h>
#include <stdlib.h>
/*
3
1   1
 2 2
  3
 2 2
1   1
*/
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
   int i,j,c,N=(2*n)-1;
    for(i=1;i<=(N/2)+1;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(j==i||j==(N-i+1))
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    c=i;
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=N;j++)
        {
            if(j==i||j==(N-i+1))
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}






