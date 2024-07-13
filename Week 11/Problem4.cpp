// Not All Flavours
// Read problem statements in Hindi, Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
// Chef made 
// 𝑁
// N pieces of cakes, numbered them 
// 1
// 1 through 
// 𝑁
// N and arranged them in a row in this order. There are 
// 𝐾
// K possible types of flavours (numbered 
// 1
// 1 through 
// 𝐾
// K); for each valid 
// 𝑖
// i, the 
// 𝑖
// i-th piece of cake has a flavour 
// 𝐴
// 𝑖
// A 
// i
// ​
//  .

// Chef wants to select a contiguous subsegment of the pieces of cake such that there is at least one flavour which does not occur in that subsegment. Find the maximum possible length of such a subsegment of cakes.

// Input
// The first line of the input contains a single integer 
// 𝑇
// T denoting the number of test cases. The description of 
// 𝑇
// T test cases follows.
// The first line of each test case contains two integers 
// 𝑁
// N and 
// 𝐾
// K.
// The second line contains 
// 𝑁
// N space-separated integers 
// 𝐴
// 1
// ,
// 𝐴
// 2
// ,
// …
// ,
// 𝐴
// 𝑁
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  .
// Output
// For each test case, print a single line containing one integer ― the maximum length of a valid subsegment.

// Constraints
// 1
// ≤
// 𝑇
// ≤
// 1
// ,
// 000
// 1≤T≤1,000
// 1
// ≤
// 𝑁
// ≤
// 1
// 0
// 5
// 1≤N≤10 
// 5
 
// 2
// ≤
// 𝐾
// ≤
// 1
// 0
// 5
// 2≤K≤10 
// 5
 
// 1
// ≤
// 𝐴
// 𝑖
// ≤
// 𝐾
// 1≤A 
// i
// ​
//  ≤K for each valid 
// 𝑖
// i
// the sum of 
// 𝑁
// N over all test cases does not exceed 
// 1
// 0
// 6
// 10 
// 6
 
// Subtasks
// Subtask #1 (50 points):

// 𝑁
// ≤
// 1
// 0
// 3
// N≤10 
// 3
 
// 𝐾
// =
// 2
// K=2
// the sum of 
// 𝑁
// N over all test cases does not exceed 
// 1
// 0
// 4
// 10 
// 4
 
// Subtask #2 (50 points): original constraints

// Sample 1:
// Input
// Output
// 2
// 6 2
// 1 1 1 2 2 1
// 5 3
// 1 1 2 2 1
// 3
// 5
// accepted
// Accepted
// 3296
// total-Submissions
// Submissions
// 15759
// accuracy
// Accuracy
// 24.11
// Did you like the problem statement?
// 5 users found this helpful
// More Info
// Time limit3 secs
// Memory limit1.5 GB
// Source Limit50000 Bytes
// C++17
// ​
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void solve() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        int left = 0, right = 0;
        int maxLength = 0;
        unordered_set<int> current_flavors;
        vector<int> count(K + 1, 0); // use 1-based indexing
        
        while (right < N) {
            current_flavors.insert(A[right]);
            count[A[right]]++;
            
            while (current_flavors.size() == K) {
                maxLength = max(maxLength, right - left);
                
                count[A[left]]--;
                if (count[A[left]] == 0) {
                    current_flavors.erase(A[left]);
                }
                left++;
            }
            
            right++;
        }
        
        // Check one last time after exiting the loop
        maxLength = max(maxLength, right - left);
        
        cout << maxLength << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}









