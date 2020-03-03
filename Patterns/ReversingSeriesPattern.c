#include <stdio.h>
#include <stdlib.h>
//5
//1
//3 2
//4 5 6
//10 9 8 7
//11 12 13 14 15
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
   int i,j,c=1,A[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            A[i][j]=c;
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<=i;j++)
            {
                printf("%d ",A[i][j]);
            }
        }
        else
        {
            for(j=i;j>=0;j--)
            {
                printf("%d ",A[i][j]);
            }
        }
        printf("\n");
    }
}
