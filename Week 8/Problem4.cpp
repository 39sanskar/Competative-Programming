// D - Divide by 2 or 3  / 
// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 400 points

// Problem Statement
// You are given a sequence of positive integers: 
// A=(a 
// 1
// ​
//  ,a 
// 2
// ​
//  ,…,a 
// N
// ​
//  ).
// You can choose and perform one of the following operations any number of times, possibly zero.

// Choose an integer 
// i such that 
// 1≤i≤N and 
// a 
// i
// ​
//   is a multiple of 
// 2, and replace 
// a 
// i
// ​
//   with 
// 2
// a 
// i
// ​
 
// ​
//  .
// Choose an integer 
// i such that 
// 1≤i≤N and 
// a 
// i
// ​
//   is a multiple of 
// 3, and replace 
// a 
// i
// ​
//   with 
// 3
// a 
// i
// ​
 
// ​
//  .
// Your objective is to make 
// A satisfy 
// a 
// 1
// ​
//  =a 
// 2
// ​
//  =…=a 
// N
// ​
//  .
// Find the minimum total number of times you need to perform an operation to achieve the objective. If there is no way to achieve the objective, print -1 instead.

// Constraints
// 2≤N≤1000
// 1≤a 
// i
// ​
//  ≤10 
// 9
 
// All values in the input are integers.
// Input
// The input is given from Standard Input in the following format:

// N
// a 
// 1
// ​
  
// a 
// 2
// ​
  
// … 
// a 
// N
// ​
 
// Output
// Print the answer.

// Sample Input 1
// Copy
// 3
// 1 4 3
// Sample Output 1
// Copy
// 3
// Here is a way to achieve the objective in three operations, which is the minimum needed.

// Choose an integer 
// i=2 such that 
// a 
// i
// ​
//   is a multiple of 
// 2, and replace 
// a 
// 2
// ​
//   with 
// 2
// a 
// 2
// ​
 
// ​
//  . 
// A becomes 
// (1,2,3).
// Choose an integer 
// i=2 such that 
// a 
// i
// ​
//   is a multiple of 
// 2, and replace 
// a 
// 2
// ​
//   with 
// 2
// a 
// 2
// ​
 
// ​
//  . 
// A becomes 
// (1,1,3).
// Choose an integer 
// i=3 such that 
// a 
// i
// ​
//   is a multiple of 
// 3, and replace 
// a 
// 3
// ​
//   with 
// 3
// a 
// 3
// ​
 
// ​
//  . 
// A becomes 
// (1,1,1).
// Sample Input 2
// Copy
// 3
// 2 7 6
// Sample Output 2
// Copy
// -1
// There is no way to achieve the objective.

// Sample Input 3
// Copy
// 6
// 1 1 1 1 1 1
// Sample Output 3
// Copy
// 0
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
} //__gcd calculation code

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //taking input

    int gcdValue = a[0]; // intial value
    for (int i = 1; i < n; i++)
        gcdValue = gcd(gcdValue, a[i]);
    // finding gcd of all the numbers in the array

    for (int i = 0; i < n; i++)
        a[i] /= gcdValue;
    // removing that gcd value from its factors , ie. divide all numbers with gcd

    int flag = true;

    int operations = 0; // operation count

    for (int i = 0; i < n; i++)
    {
        while (a[i] % 2 == 0)
        {
            operations++;
            a[i] /= 2;
        } // divide with 2 till possible
        while (a[i] % 3 == 0)
        {
            operations++;
            a[i] /= 3;
        } // divide with 3 till possible
        if (a[i] != 1)
        {
            flag = false;
            break;
        } // if after removing gcd, all 2s,
        // and all 3s, still the number is not 1 means answer is -1
    }

    if (flag)
        cout << operations << endl;
    else
        cout << -1 << endl; 

    return 0;
}







