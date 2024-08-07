// A. Divide and Conquer
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// An array b
//  is good if the sum of elements of b
//  is even.

// You are given an array a
//  consisting of n
//  positive integers. In one operation, you can select an index i
//  and change ai:=⌊ai2⌋
// . †
// Find the minimum number of operations (possibly 0
// ) needed to make a
//  good. It can be proven that it is always possible to make a
//  good.

// †
//  ⌊x⌋
//  denotes the floor function — the largest integer less than or equal to x
// . For example, ⌊2.7⌋=2
// , ⌊π⌋=3
//  and ⌊5⌋=5
// .

// Input
// Each test contains multiple test cases. The first line contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains a single integer n
//  (1≤n≤50
// ) — the length of the array a
// .

// The second line of each test case contains n
//  space-separated integers a1,a2,…,an
//  (1≤ai≤106
// ) — representing the array a
// .

// Do note that the sum of n
//  over all test cases is not bounded.

// Output
// For each test case, output the minimum number of operations needed to make a
//  good.

// Example
// inputCopy
// 4
// 4
// 1 1 1 1
// 2
// 7 4
// 3
// 1 2 4
// 1
// 15
// outputCopy
// 0
// 2
// 1
// 4
// Note
// In the first test case, array a
//  is already good.

// In the second test case, we can perform on index 2
//  twice. After the first operation, array a
//  becomes [7,2]
// . After performing on index 2
//  again, a
//  becomes [7,1]
// , which is good. It can be proved that it is not possible to make a
//  good in less number of operations.

// In the third test case, a
//  becomes [0,2,4]
//  if we perform the operation on index 1
//  once. As [0,2,4]
//  is good, answer is 1
// .

// In the fourth test case, we need to perform the operation on index 1
//  four times. After all operations, a
//  becomes [0]
// . It can be proved that it is not possible to make a
//  good in less number of operations.
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        int odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 != 0) odd++;
        }
        
        int ans = INT_MAX;
        if (odd % 2 == 0) {
            cout << "0" << endl;
        } else {
            for (int i = 0; i < n; i++) {
                int count = 0;
                if (arr[i] % 2 == 0) {
                    while (arr[i] % 2 == 0) {
                        count++;
                        arr[i] /= 2;
                    }
                } else {
                    while (arr[i] % 2 != 0) {
                        count++;
                        arr[i] /= 2;
                    }
                }
                ans = min(ans, count);
            }
            cout << ans << endl;
        }
    }
    return 0;
}



















