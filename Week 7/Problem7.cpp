// A. Co-prime Array
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given an array of n elements, you must make it a co-prime array in as few moves as possible.

// In each move you can insert any positive integral number you want not greater than 109 in any place in the array.

// An array is co-prime if any two adjacent numbers of it are co-prime.

// In the number theory, two integers a and b are said to be co-prime if the only positive integer that divides both of them is 1.

// Input
// The first line contains integer n (1 ≤ n ≤ 1000) — the number of elements in the given array.

// The second line contains n integers ai (1 ≤ ai ≤ 109) — the elements of the array a.

// Output
// Print integer k on the first line — the least number of elements needed to add to the array a to make it co-prime.

// The second line should contain n + k integers aj — the elements of the array a after adding k elements to it. Note that the new array should be co-prime, so any two adjacent values should be co-prime. Also the new array should be got from the original array a by adding k elements to it.

// If there are multiple answers you can print any one of them.

// Example
// inputCopy
// 3
// 2 7 28
// outputCopy
// 1
// 2 7 9 28
#include <iostream>
#include <vector>
#include <numeric> // For std::gcd

using namespace std;

// Function to check if two numbers are co-prime
bool isCoPrime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> result;
    int insertions = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        result.push_back(a[i]);
        if (!isCoPrime(a[i], a[i + 1])) {
            // Insert a '1' between non-co-prime pairs to make them co-prime
            result.push_back(1);
            ++insertions;
        }
    }
    // Don't forget to add the last element
    result.push_back(a[n - 1]);
    
    cout << insertions << endl;
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}





