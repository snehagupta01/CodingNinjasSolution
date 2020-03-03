#include <stdio.h>
#include <stdlib.h>
//2
//  0
// 101
//21012
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int i,j,c,k,l;
    for(i=n,l=0;i>=0,l<=n;i--,l++)
    {
        c=n-i;
        for(j=0;j<=n;j++)
        {
            if(j==n)
            {
                printf("0");
            }
            else if(j>=i)
            {
                printf("%d",c);
                c--;
            }
            else
            {
                printf(" ");
            }
        }
        c=1;
        for(k=0;k<n;k++)
        {
            if(k<l)
            {
                printf("%d",c);
                c++;
            }
            else{
                break;
            }
        }
        printf("\n");
    }
}

