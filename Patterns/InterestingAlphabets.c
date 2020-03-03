#include <stdio.h>
#include <stdlib.h>
//5
//E
//DE
//CDE
//BCDE
//ABCDE
int main(){
    int n;
    scanf("%d",&n);
    printPatt(n);
    return 0;
}
void printPatt(int n)
{
    char ch='A',new;
    ch+=n;
    ch--;
    int i,j;
    new=ch;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch=ch-i-1;
        printf("\n");
    }
}
