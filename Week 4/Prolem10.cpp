// B. Array Cancellation
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You're given an array a
//  of n
//  integers, such that a1+a2+⋯+an=0
// .

// In one operation, you can choose two different indices i
//  and j
//  (1≤i,j≤n
// ), decrement ai
//  by one and increment aj
//  by one. If i<j
//  this operation is free, otherwise it costs one coin.

// How many coins do you have to spend in order to make all elements equal to 0
// ?

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤5000
// ). Description of the test cases follows.

// The first line of each test case contains an integer n
//  (1≤n≤105
// )  — the number of elements.

// The next line contains n
//  integers a1,…,an
//  (−109≤ai≤109
// ). It is given that ∑ni=1ai=0
// .

// It is guaranteed that the sum of n
//  over all test cases does not exceed 105
// .

// Output
// For each test case, print the minimum number of coins we have to spend in order to make all elements equal to 0
// .

// Example
// inputCopy
// 7
// 4
// -3 5 -3 1
// 2
// 1 -1
// 4
// -3 2 -3 4
// 4
// -1 1 1 -1
// 7
// -5 7 -6 -4 17 -13 4
// 6
// -1000000000 -1000000000 -1000000000 1000000000 1000000000 1000000000
// 1
// 0
// outputCopy
// 3
// 0
// 4
// 1
// 8
// 3000000000
// 0
// Note
// Possible strategy for the first test case:

// Do (i=2,j=3)
//  three times (free), a=[−3,2,0,1]
// .
// Do (i=2,j=1)
//  two times (pay two coins), a=[−1,0,0,1]
// .
// Do (i=4,j=1)
//  one time (pay one coin), a=[0,0,0,0]
// .
// A. Subset Mex
// time limit per test1 second
// memory limit per test512 megabytes
// inputstandard input
// outputstandard output
// Given a set of integers (it can contain equal elements).

// You have to split it into two subsets A
//  and B
//  (both of them can contain equal elements or be empty). You have to maximize the value of mex(A)+mex(B)
// .

// Here mex
//  of a set denotes the smallest non-negative integer that doesn't exist in the set. For example:

// mex({1,4,0,2,2,1})=3
// mex({3,3,2,1,3,0,0})=4
// mex(∅)=0
//  (mex
//  for empty set)
// The set is splitted into two subsets A
//  and B
//  if for any integer number x
//  the number of occurrences of x
//  into this set is equal to the sum of the number of occurrences of x
//  into A
//  and the number of occurrences of x
//  into B
// .

// Input
// The input consists of multiple test cases. The first line contains an integer t
//  (1≤t≤100
// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains an integer n
//  (1≤n≤100
// ) — the size of the set.

// The second line of each testcase contains n
//  integers a1,a2,…an
//  (0≤ai≤100
// ) — the numbers in the set.

// Output
// For each test case, print the maximum value of mex(A)+mex(B)
// .

// Example
// inputCopy
// 4
// 6
// 0 2 1 5 0 1
// 3
// 0 1 2
// 4
// 0 2 0 1
// 6
// 1 2 3 4 5 6
// outputCopy
// 5
// 3
// 4
// 0
// Note
// In the first test case, A={0,1,2},B={0,1,5}
//  is a possible choice.

// In the second test case, A={0,1,2},B=∅
//  is a possible choice.

// In the third test case, A={0,1,2},B={0}
//  is a possible choice.

// In the fourth test case, A={1,3,5},B={2,4,6}
//  is a possible choice.
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        int cnt[101];// number of occurences of i..
        for (int i = 0; i < 101; i++ )
        cnt[i]=0;
        for(int i = 1; i <= n; i++ )
        {
            cin >> arr[i];
            cnt[arr[i]]++;

        }
        int mexa = 0;
        while (cnt[mexa] >=2) mexa++;

        int mexb = 0;
        while (cnt[mexb] >=1) mexb++;

        cout << mexa + mexb << endl;


    }
    return 0;
}













