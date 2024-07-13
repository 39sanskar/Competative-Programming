// B - Pasta  / 
// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 200 points

// Problem Statement
// There is pasta consisting of 
// N noodles at Takahashi's home. The length of the 
// i-th noodle is 
// A 
// i
// ​
//  .
// Takahashi has a meal plan for the next 
// M days. On the 
// i-th day, he is going to choose a pasta noodle of length exactly 
// B 
// i
// ​
//   and eat it. If no such noodle is available on any day, his plan fails. Additionally, he cannot eat the same noodle on multiple days.

// Can Takahashi accomplish his meal plan?

// Constraints
// 1≤M≤N≤1000
// 1≤A 
// i
// ​
//  ≤10 
// 9
 
// 1≤B 
// i
// ​
//  ≤10 
// 9
 
// All values in input are integers.
// Input
// Input is given from Standard Input in the following format:

// N 
// M
// A 
// 1
// ​
  
// A 
// 2
// ​
  
// … 
// A 
// N
// ​
 
// B 
// 1
// ​
  
// B 
// 2
// ​
  
// … 
// B 
// M
// ​
 
// Output
// If Takahashi can accomplish his meal plan, print Yes; otherwise, print No.

// Sample Input 1
// Copy
// 3 2
// 1 1 3
// 3 1
// Sample Output 1
// Copy
// Yes
// He can eat the 
// 3-rd noodle on the 
// 1-st day and the 
// 1-st noodle on the 
// 2-nd day, so his meal plan is feasible.

// Sample Input 2
// Copy
// 1 1
// 1000000000
// 1
// Sample Output 2
// Copy
// No
// A noodle of length exactly 
// 1 is needed.

// Sample Input 3
// Copy
// 5 2
// 1 2 3 4 5
// 5 5
// Sample Output 3
// Copy
// No
// Since there are only 
// 1 noodle of length 
// 5, he cannot have a meal on the 
//2-nd day.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    vector<long long> B(M);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int i = 0; // Pointer for A
    int j = 0; // Pointer for B

    while (i < N && j < M) {
        if (A[i] == B[j]) {
            // If a match is found, move to the next noodle and the next requirement
            ++i;
            ++j;
        } else if (A[i] < B[j]) {
            // If the current available noodle is too short, try the next available noodle
            ++i;
        } else {
            // If the current required noodle cannot be matched, the plan fails
            cout << "No" << endl;
            return 0;
        }
    }

    // If all requirements are satisfied
    if (j == M) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

