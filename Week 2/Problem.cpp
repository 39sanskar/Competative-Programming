// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

// Input
// Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

// Output
// Print "Yes" or "No" according to the statement.
#include <iostream>
using namespace std;
 
int main() {
    int a , b; //take input of these values
    cin >> a >> b;
    
    if(a >= b){
        cout << "Yes" << endl;
        
    }else{
        cout <<"No" << endl;
    }
    return 0;
}


