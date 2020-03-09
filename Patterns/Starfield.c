#include <stdio.h>
#include <stdlib.h>
/*
5
*       *
 *     *
* *   * *
 * * * *
* * * * *
 * * * *
* *   * *
 *     *
*       *
*/
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    //write your code here
    int i,j,n1=2*n-1,s,e;
    for(i=1;i<=n;i++)
    {
        s=i;
        e=2*n-i;
        if(i%2!=0)
        {
            for(j=1;j<=s;j++)
        	{
            printf("* ");
            j++;
        	}
        }
        else
        {
            for(j=1;j<=s;j++)
        	{
                if(j==1)
                {
                    printf(" ");
                }
            	else
                {
                    printf("* ");
                    j++;
                }
            
        	}
        }
        for(j=s+2;j<e;j++)
        {
            printf(" ");
        }
        //if(s!=e)
        //{
            for(;j<=n1;j++)
        	{
            printf("* ");
            j++;
        	}
       // }
        printf("\n");
        
    }
    for(i=n-1;i>=1;i--)
    {
        s=i;
        e=2*n-i;
        if(i%2!=0)
        {
            for(j=1;j<=s;j++)
        	{
            printf("* ");
            j++;
        	}
        }
        else
        {
            for(j=1;j<=s;j++)
        	{
                if(j==1)
                {
                    printf(" ");
                }
            	else
                {
                    printf("* ");
                    j++;
                }
            
        	}
        }
        for(j=s+2;j<e;j++)
        {
            printf(" ");
        }
        //if(s!=e)
        //{
            for(;j<=n1;j++)
        	{
            printf("* ");
            j++;
        	}
       // }
        printf("\n");
        //printf("\n");
    }
    
}







