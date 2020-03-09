#include <stdio.h>
#include <stdlib.h>
/*
4
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int i,j,s=1,e=(2*n-1),c=n;
    for(i=1;i<=n;i++)
    {
        c=n;
        for(j=1;j<=(2*n-1);j++)
        {
            //c=n;
            if(j<s)
            {
                printf("%d",c);
                c--;
            }
            else if(j>e)
            {
                c++;
                printf("%d",c);
            }
            else
            {
               // c=n;
                printf("%d",c);
            }
        }
        s++;
        e--;
        printf("\n");
    }
    s-=2;
    e+=2;
    for(i=1;i<n;i++)
    {
        c=n;
        for(j=1;j<=(2*n-1);j++)
        {
            if(j<s)
            {
                printf("%d",c);
                c--;
            }
            else if(j>e)
            {
                c++;
                printf("%d",c);
            }
            else
            {
                printf("%d",c);
            }
        }
        s--;
        e++;
        printf("\n");
    }
}




