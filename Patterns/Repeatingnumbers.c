#include <stdio.h>
#include <stdlib.h>
/*
5
1
23
4567
89123456
7891234567891234
*/
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}

void printPatt(int n)
{
   int ct=0,c=1,prev=2,i,j;
    for(i=1;i<=n;i++)
    {
        if(i!=1)
        {
            ct+=prev;
        }
        else
        {
            ct=1;
        }
       for(j=1;j<=ct;j++)
       {
           printf("%d",c);
           if(c==9)
           {
               c=1;
               continue;
           }
           c++;
       }
        printf("\n");
           prev=ct;
    }
}







