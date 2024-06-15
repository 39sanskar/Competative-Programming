#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n; cin >> n;
	int current_value = 1;
    for( int i =0; i < n; i++){
        int a[i+1];
        for(int j =0; j < i+1; j++)
           a[j] = current_value++;

        if ( i % 2 == 0 )
           reverse(a , a + (i+1));

        for(int j=0; j < i+1; j++)
           cout << a[j] << " ";
        cout << endl;
    }
}

