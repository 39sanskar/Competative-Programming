// Given two numbers N and M. Print the summation of their last digits.

// Input
// Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

// Output
// Print the answer of the problem.

// Example
// inputCopy
// 13 12
// outputCopy
// 5
// Note
// First Example :

// last digit in the first number is 3 and last digit in the second number is 2.

// So the answer is: (3 + 2 = 5)
#include<iostream>
using namespace std;
int main(){
    long long  n , m;
    cin >> n >> m;
    
    int last_digit_n = n % 10;
    int last_digit_m = m % 10;
    cout << last_digit_n + last_digit_m << endl;
    return 0;
}
