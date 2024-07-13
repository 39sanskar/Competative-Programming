//Number Groups
// First, we have to find the first element of the th group.

// For example:

// The st group's first element is , which is the st odd number.
// The nd group's first element is , which is the th odd number.
// The rd group's first element is , which is the th odd number.
// The th group's first element is , which is the th odd number.
// The th group's first element is , which is the th odd number.
// ...
// In general, the th group's first element is the th odd number, where

// Now, as we know, the th odd number is . This gives us the first element of the th group. We also know that there are  elements in this group, so we can find their sum by simply counting upwards from , by two,  times and adding them all. This gives us a linear-time solution.

// To optimize, note that the expression for  can be simplified as , hence . It's also possible to compute the sum of an arithmetic progression with a formula. This gives a fast, constant-time solution.

//Note: You may also notice that the answer is just . This yields another fast solution that's much easier to code.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k;
    cin >> k;
    cout << 1LL * k * k * k << endl;
    
    return 0;
}