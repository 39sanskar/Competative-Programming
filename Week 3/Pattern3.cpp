#include<bits/stdc++.h>
using namespace std;
//Hollow Rectangle.
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    cout << "*";
    cout << endl; // First Row

    // mid code
    for ( int i = 0; i <= n-2; i++)
    {
        cout << "*";
        for(int j = 1; j <= m-2; j++)
           cout << " ";
        cout << "*";
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    cout << "*";
    cout << endl; // Last Row
    return 0;

}
