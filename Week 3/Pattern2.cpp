// This is the solution of required problem..
#include<bits/stdc++.h>
using namespace std;
//Hollow Rectangle.
int main(){
    int n, m;
    cin >> n >> m;
    for ( int i = 1; i<=n; i++)
    {
        for( int j = 1; j<=m; j++)
        {
            if(i == 1 || i == n)
            {
               cout << "*";
            }//i stand at the first or last row.
            else
            {
               if( j == 1 || j == m) 
               cout << "*";
               else cout << " ";
            }
            
            
        }
        cout << endl;
    }
    return 0;

}
