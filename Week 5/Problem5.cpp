// B - At Most 3 (Judge ver.)  / 
// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 200 points

// Problem Statement
// There are 
// N weights called Weight 
// 1, Weight 
// 2, 
// …, Weight 
// N. Weight 
// i has a mass of 
// A 
// i
// ​
//  .
// Let us say a positive integer 
// n is a good integer if the following condition is satisfied:

// We can choose at most 
// 3 different weights so that they have a total mass of 
// n.
// How many positive integers less than or equal to 
// W are good integers?

// Constraints
// 1≤N≤300
// 1≤W≤10 
// 6
 
// 1≤A 
// i
// ​
//  ≤10 
// 6
 
// All values in input are integers.
// Input
// Input is given from Standard Input in the following format:

// N 
// W
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
 
// Output
// Print the answer.

// Sample Input 1
// Copy
// 2 10
// 1 3
// Sample Output 1
// Copy
// 3
// If we choose only Weight 
// 1, it has a total mass of 
// 1, so 
// 1 is a good integer.
// If we choose only Weight 
// 2, it has a total mass of 
// 3, so 
// 3 is a good integer.
// If we choose Weights 
// 1 and 
// 2, they have a total mass of 
// 4, so 
// 4 is a good integer.
// No other integer is a good integer. Also, all of 
// 1, 
// 3, and 
// 4 are integers less than or equal to 
// W. Therefore, the answer is 
// 3.

// Sample Input 2
// Copy
// 2 1
// 2 3
// Sample Output 2
// Copy
// 0
// There are no good integers less than or equal to 
// W.

// Sample Input 3
// Copy
// 4 12
// 3 3 3 3
// Sample Output 3
// Copy
// 3
// There are 
// 3 good integers: 
// 3,6, and 
// 9.
// For example, if we choose Weights 
// 1, 
// 2, and 
// 3, they have a total mass of 
// 9, so 
// 9 is a good integer.
// Note that 
// 12 is not a good integer.

// Sample Input 4
// Copy
// 7 251
// 202 20 5 1 4 2 100
// Sample Output 4
// Copy
// 48
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> weights(N);
    for (int i = 0; i < N; ++i) {
        cin >> weights[i];
    }

    set<int> good_sums;

    // Generate sums using combinations of 1, 2, and 3 weights
    for (int i = 0; i < N; ++i) {
        if (weights[i] <= W) {
            good_sums.insert(weights[i]);
        }
        for (int j = i + 1; j < N; ++j) {
            int sum2 = weights[i] + weights[j];
            if (sum2 <= W) {
                good_sums.insert(sum2);
            }
            for (int k = j + 1; k < N; ++k) {
                int sum3 = weights[i] + weights[j] + weights[k];
                if (sum3 <= W) {
                    good_sums.insert(sum3);
                }
            }
        }
    }

    // Output the count of unique sums that are less than or equal to W
    cout << good_sums.size() << endl;

    return 0;
}








