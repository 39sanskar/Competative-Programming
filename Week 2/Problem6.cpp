// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.

// Examples
// inputCopy
// 1 2 3
// outputCopy
// 1 3
// inputCopy
// -1 -2 -3
// outputCopy
// -3 -1
// inputCopy
// 10 20 -5
// outputCopy
// -5 20

#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cin >> a >> b >> c;
    cout << min(a , min(b , c)) << " " << max(a , max(b , c));
    return 0;
}