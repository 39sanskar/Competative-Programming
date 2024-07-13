// B - K-th Common Divisor  / 
// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 200 points

// Problem Statement
// You are given positive integers 
// A and 
// B.

// Find the 
// K-th largest positive integer that divides both 
// A and 
// B.

// The input guarantees that there exists such a number.

// Constraints
// All values in input are integers.
// 1≤A,B≤100
// The 
// K-th largest positive integer that divides both 
// A and 
// B exists.
// K≥1
// Input
// Input is given from Standard Input in the following format:

// A 
// B 
// K
// Output
// Print the 
// K-th largest positive integer that divides both 
// A and 
// B.

// Sample Input 1
// Copy
// 8 12 2
// Sample Output 1
// Copy
// 2
// Three positive integers divides both 
// 8 and 
// 12: 
// 1,2 and 
// 4. Among them, the second largest is 
// 2.

// Sample Input 2
// Copy
// 100 50 4
// Sample Output 2
// Copy
// 5
// Sample Input 3
// Copy
// 1 1 1
// Sample Output 3
// Copy
// 1
// Language
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    
    vector<int> divisors;
    
    // Finding all common divisors of A and B
    for (int i = 1; i <= min(A, B); ++i) {
        if (A % i == 0 && B % i == 0) {
            divisors.push_back(i);
        }
    }
    
    // Sort divisors in descending order
    sort(divisors.begin(), divisors.end(), greater<int>());
    
    // Output the K-th largest divisor
    cout << divisors[K - 1] << endl;
    
    return 0;
}










