// B. Make Them Odd
// time limit per test3 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// There are n
//  positive integers a1,a2,…,an
// . For the one move you can choose any even value c
//  and divide by two all elements that equal c
// .

// For example, if a=[6,8,12,6,3,12]
//  and you choose c=6
// , and a
//  is transformed into a=[3,8,12,3,3,12]
//  after the move.

// You need to find the minimal number of moves for transforming a
//  to an array of only odd integers (each element shouldn't be divisible by 2
// ).

// Input
// The first line of the input contains one integer t
//  (1≤t≤104
// ) — the number of test cases in the input. Then t
//  test cases follow.

// The first line of a test case contains n
//  (1≤n≤2⋅105
// ) — the number of integers in the sequence a
// . The second line contains positive integers a1,a2,…,an
//  (1≤ai≤109
// ).

// The sum of n
//  for all test cases in the input doesn't exceed 2⋅105
// .

// Output
// For t
//  test cases print the answers in the order of test cases in the input. The answer for the test case is the minimal number of moves needed to make all numbers in the test case odd (i.e. not divisible by 2
// ).

// Example
// inputCopy
// 4
// 6
// 40 6 40 3 20 1
// 1
// 1024
// 4
// 2 4 8 16
// 3
// 3 1 7
// outputCopy
// 4
// 10
// 4
// 0
// Note
// In the first test case of the example, the optimal sequence of moves can be as follows:

// before making moves a=[40,6,40,3,20,1]
// ;
// choose c=6
// ;
// now a=[40,3,40,3,20,1]
// ;
// choose c=40
// ;
// now a=[20,3,20,3,20,1]
// ;
// choose c=20
// ;
// now a=[10,3,10,3,10,1]
// ;
// choose c=10
// ;
// now a=[5,3,5,3,5,1]
//  — all numbers are odd.
// Thus, all numbers became odd after 4
//  moves. In 3
//  or fewer moves, you cannot make them all odd.
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    set<int> st;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;

        st.insert(x);

    }
    int ans =0;
    while(!st.empty())
    {
        int val = *st.rbegin();
        st.erase(val);

        if(val % 2==0)
        {
            ans++;
            st.insert(val / 2);
        }
    }
    
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) solve();

    return 0;
}
