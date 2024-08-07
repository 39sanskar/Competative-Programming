// C. Boxes Packing
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Mishka has got n empty boxes. For every i (1 ≤ i ≤ n), i-th box is a cube with side length ai.

// Mishka can put a box i into another box j if the following conditions are met:

// i-th box is not put into another box;
// j-th box doesn't contain any other boxes;
// box i is smaller than box j (ai < aj).
// Mishka can put boxes into each other an arbitrary number of times. He wants to minimize the number of visible boxes. A box is called visible iff it is not put into some another box.

// Help Mishka to determine the minimum possible number of visible boxes!

// Input
// The first line contains one integer n (1 ≤ n ≤ 5000) — the number of boxes Mishka has got.

// The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 109), where ai is the side length of i-th box.

// Output
// Print the minimum possible number of visible boxes.

// Examples
// inputCopy
// 3
// 1 2 3
// outputCopy
// 1
// inputCopy
// 4
// 4 2 4 3
// outputCopy
// 2
// Note
// In the first example it is possible to put box 1 into box 2, and 2 into 3.

// In the second example Mishka can put box 2 into box 3, and box 4 into box 1.

#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    cin >> a[i];
    
    map<int , int> cnt;
    for(int i=0; i < n; i++)
    {
        int[a[i]]++;

    }
    int ans = 0;
    for(auto it : cnt)
    {
        cnt freq = it.second;
        ans = max(ans , freq);
    }
    cout << ans << "\n";
    return 0;
}