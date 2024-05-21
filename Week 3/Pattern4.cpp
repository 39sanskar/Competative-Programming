#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    for(int i =1; i <= n; i++)//Outer loop
    {
       for( int j =1; j <=(n-i+1); j++)// Inner loop
       {
        cout << "*";
       }
       cout<<endl;
    }
    return 0;
}

