#include <stdio.h>
#include <stdlib.h>
//5
// *****
//  ****
//   ***
//    **
//     *
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        {
            if(i>=j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
