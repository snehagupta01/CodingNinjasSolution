#include<iostream>
using namespace std;


int main(){
    
   	int n;
    cin >> n;//input taken
    //cout << n;
    int i,j;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << ch;
        }
        ch++;
        cout << '\n';
    }
}
