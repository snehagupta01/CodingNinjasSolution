#include <stdio.h>
/*
//3
       1
     232
   34543
   */
int main() {
    int n;
    scanf("%d",&n);
    int i,j,sp,l,lim,c;
    l=2*n-1;
    sp=l-1;
    for(i=1;i<=n;i++)
    {
        c=i;
        lim=2*i-1;
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        j--;
        while(j!=l)
        {
            printf("%d",c);
            j++;
            if(c==lim)
            {
                c--;
                break;
            }
            else
            {
                c++;
            }
        }
        while(j!=l)
        {
            printf("%d",c);
            c--;
            j++;
        }
        sp-=2;
        printf("\n");
    }
}
