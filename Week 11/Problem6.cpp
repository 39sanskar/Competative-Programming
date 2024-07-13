// You are given an array of n integers, and your task is to find two values (at distinct positions) whose sum is x.
// Input
// The first input line has two integers n and x: the array size and the target sum.
// The second line has n integers a_1,a_2,\dots,a_n: the array values.
// Output
// Print two integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le x,a_i \le 10^9

// Example
// Input:
// 4 8
// 2 7 5 1

// Output:
// 2 4
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // take input

    map<int, int> mp;
    int flag = 0;
    int i1 = -1;
    int i2 = -1;

    for (int i = 0; i < n; i++) // O(n)
    {
        if (mp.find(x - a[i]) != mp.end()) //O(logn)
        {
            i1 = i+1;
            i2 = mp[x - a[i]]+1;
            flag = 1;
            break;
        }
        mp[a[i]] = i; // O(logn)
    }

    if (flag)
        cout << i1 << " " << i2 << endl;
    else
        cout << "IMPOSSIBLE" << endl;
    return 0;
}

// TC - O(nlogn)
// SC - O(n)