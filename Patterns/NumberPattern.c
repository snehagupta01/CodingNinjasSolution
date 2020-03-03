#include <stdio.h>
#include <stdlib.h>
//5
//55555
//45555
//34555
//23455
//12345
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int i,j,c,k;
    for(i=1,k=n;i<=n,k>=1;i++,k--)
    {
        c=k;
        for(j=1;j<=n;j++)
        {
            if(j<i)
            {
                printf("%d",c);
                c++;
            }
            else if(j>=i)
            {
                printf("%d",n);
            }

        }
        printf("\n");
    }
}

