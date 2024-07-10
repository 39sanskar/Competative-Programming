// B. Tiles Game Again
// time limit per test  1s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyansh and his friends are playing a game where they arrange tiles in a line. Each tile can either be an obstacle or a blank space. A blank space is represented by 0
//  and an obstacle by 1
// .

// They are interested in finding the longest continuous sequence of blank spaces in their arrangement.

// Your task is to help them by finding the length of the longest blank space in each arrangement.

// Input
// The first line contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases.

// The first line of each test case contains a single integer n
//  (1≤n≤100
// ) — the length of the array.

// The second line of each test case contains n
//  space-separated integers ai
//  (0≤ai≤1
// ) — the elements of the array.

// Output
// For each test case, output a single integer — the length of the longest blank space.

// Example
// inputCopy
// 5
// 5
// 1 0 0 1 0
// 4
// 0 1 1 1
// 1
// 0
// 3
// 1 1 1
// 9
// 1 0 0 0 1 0 0 0 1
// outputCopy
// 2
// 1
// 1
// 0
// 3
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t; // number of test cases
    
    while (t--) {
        int n;
        cin >> n; // length of the array
        
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        int max_length = 0;
        int current_length = 0;
        
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                current_length++;
            } else {
                if (current_length > max_length) {
                    max_length = current_length;
                }
                current_length = 0;
            }
        }
        
        // Check one last time after the loop ends
        if (current_length > max_length) {
            max_length = current_length;
        }
        
        cout << max_length << endl;
    }
    
    return 0;
}






