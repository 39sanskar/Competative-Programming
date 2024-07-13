// Given n integers, your task is to report for each integer the number of its divisors.
// For example, if x=18, the correct answer is 6 because its divisors are 1,2,3,6,9,18.
// Input
// The first input line has an integer n: the number of integers.
// After this, there are n lines, each containing an integer x.
// Output
// For each integer, print the number of its divisors.
// Constraints

// 1 \le n \le 10^5
// 1 \le x \le 10^6

// Example
// Input:
// 3
// 16
// 17
// 18

// Output:
// 5
// 2
// 6
#include <iostream>
#include <vector>

using namespace std;

void countDivisors(vector<int>& numDivisors) {
    int maxN = numDivisors.size();
    
    // Initialize numDivisors array
    for (int i = 1; i < maxN; ++i) {
        for (int j = i; j < maxN; j += i) {
            numDivisors[j]++;
        }
    }
}

int main() {
    // Read input
    int n;
    cin >> n;
    
    vector<int> xValues(n);
    int max_x = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> xValues[i];
        if (xValues[i] > max_x) {
            max_x = xValues[i];
        }
    }
    
    // Maximum value of x based on constraints
    const int MAX_X = 1000000;
    
    // Create array to store number of divisors
    vector<int> numDivisors(MAX_X + 1, 0);
    
    // Precompute number of divisors using a sieve-like approach
    countDivisors(numDivisors);
    
    // Output results
    for (int i = 0; i < n; ++i) {
        cout << numDivisors[xValues[i]] << "\n";
    }
    
    return 0;
}
    
    
