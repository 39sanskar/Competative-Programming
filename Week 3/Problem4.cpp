// Given a number X. Determine if the number is prime or not

// Note:

// A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

// In other words : prime number divisible only by 1 and itself.

// Be careful that 1 is not prime .

// The first few prime numbers are


// Input
// Only one line containing a number X (2 ≤ X ≤ 105).

// Output
// print "YES" if the number is prime and "NO" otherwise.

// Examples
// inputCopy
// 7
// outputCopy
// YES
// inputCopy
// 15
// outputCopy
// NO
// Note
// First Example :
// First Example:

// 7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.

// Second Example :

// 15 not is prime because it is divisible by 3 ,5, so the answer is NO.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n <= 1){
        cout << "NO" << endl;
        return 0;
    }
    // N = > Other than 1 and N
    // Divisor has to be between {2 and N-1}

    for(int i = 2; i < n; i++){
        if(n%i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
    

