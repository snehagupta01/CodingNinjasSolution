#include <stdio.h>
#include <stdlib.h>
//3
//ABCCBA
// ABBA
//  AA
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int i,k,j;
    char ch='A';
    for(i=1,k=n;i<=n,k>=1;i++,k--)
    {
       ch='A';
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                printf("%c",ch);
                ch++;
            }
            else
            {
                printf(" ");
            }
        }

            ch='A';
            ch+=k;
            ch--;
            for(j=1;j<=k;j++)
            {
                printf("%c",ch);
                ch--;
            }


         printf("\n");

    }


}
