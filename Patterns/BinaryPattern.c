#include <stdio.h>
#include <stdlib.h>
//4
//1111
//000
//11
//0
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int i,j,c=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i%2!=0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        c--;
        printf("\n");
    }
}
