#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    for(int i =1; i <= n; i++)//Outer loop
    {
       for( int j =i; j <=n; j++)// Inner loop
       {
        cout << "*";
       }
       cout<<endl;
    }
    return 0;
}