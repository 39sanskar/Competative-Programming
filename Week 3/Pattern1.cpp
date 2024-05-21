#include<bits/stdc++.h>
using namespace std;
//Solid Rectangle.
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i <= n; i++)//outer loop it is actually printing every row.
    {

        for( int j = 0; j <= m; j++)// inner loop it is actually printing every column.
        {
            cout << "*";
        }
        cout << endl;// i have exauhasted the printing one row..
    }
    return 0;
}