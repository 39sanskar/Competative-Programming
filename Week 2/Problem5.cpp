// Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

// The comparison is as follows: A < B, A > B, A = B.

// Where A, B are two integer numbers and S refers to the sign between them.

// Input
// Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

// Output
// Print "Right" if the comparison is true, "Wrong" otherwise.

// Examples
// inputCopy
// 5 > 4
// outputCopy
// Right
// inputCopy
// 9 < 1
// outputCopy
// Wrong
// inputCopy
// 4 = 4
// outputCopy
// Right

#include<iostream>
using namespace std;
int main() {
    int a , b;
    char c;
    cin >> a >> c >> b;
    if(c == '<' && a < b){
        cout << "Right" << endl;
    }else if(c == '>' && a > b){
        cout << "Right" << endl;
    }else if(c == '=' && a == b){
        cout << "Right" << endl;
    }else{
        cout << "Wrong" << endl;
    }
    return 0;
}
