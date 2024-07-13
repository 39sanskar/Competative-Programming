// A. Equation
// time limit per test3 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Let's call a positive integer composite if it has at least one divisor other than 1
//  and itself. For example:

// the following numbers are composite: 1024
// , 4
// , 6
// , 9
// ;
// the following numbers are not composite: 13
// , 1
// , 2
// , 3
// , 37
// .
// You are given a positive integer n
// . Find two composite integers a,b
//  such that a−b=n
// .

// It can be proven that solution always exists.

// Input
// The input contains one integer n
//  (1≤n≤107
// ): the given integer.

// Output
// Print two composite integers a,b
//  (2≤a,b≤109,a−b=n
// ).

// It can be proven, that solution always exists.

// If there are several possible solutions, you can print any.

// Examples
// inputCopy
// 1
// outputCopy
// 9 8
// inputCopy
// 512
// outputCopy
// 4608 4096
#include <iostream>

using namespace std;

bool is_composite(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return true;
    }
    return false;
}

void find_composite_pair(int n) {
    // Start with b = 4, a = b + n
    int b = 4;
    int a = b + n;
    
    // Ensure both a and b are composite and within range
    while (!is_composite(a) || !is_composite(b) || a > 1e9 || b > 1e9) {
        b++;
        a = b + n;
    }
    
    // Output the pair (a, b)
    cout << a << " " << b << endl;
}

int main() {
    int n;
    cin >> n;
    
    find_composite_pair(n);
    
    return 0;
}






