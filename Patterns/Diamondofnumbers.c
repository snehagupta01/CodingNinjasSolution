#include <stdio.h>
#include <stdlib.h>
/*
7
    1
   123
  12345
 1234567
  12345
   123
    1
*/
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
   int i,j,s,e,c=1;
    if(n%2==0)
        n++;
    s=(n/2)+1;
    e=(n/2)+1;
    for(i=1;i<=(n/2)+1;i++)
    {
        c=1;
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
                printf("%d",c);
                c++;
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
        c=1;
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
                printf("%d",c);
                c++;
            }
        }
        printf("\n");
        s++;
        e--;
    }


}


