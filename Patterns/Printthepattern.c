#include <stdio.h>
#include <stdlib.h>
/*
5
 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10
*/
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPattern(int n){
	int A[n][n],i,j,c=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            A[i][j]=c;
            c++;
        }
    }
   
	for(i=0;i<n;i+=2)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
        if(i==n-1)
          //  f=1;
            break;
    }
 i--;
    for(;i>=0;i-=2)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}


