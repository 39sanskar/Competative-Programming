// B. Square Difference
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Alice has a lovely piece of cloth. It has the shape of a square with a side of length a
//  centimeters. Bob also wants such piece of cloth. He would prefer a square with a side of length b
//  centimeters (where b<a
// ). Alice wanted to make Bob happy, so she cut the needed square out of the corner of her piece and gave it to Bob. Now she is left with an ugly L shaped cloth (see pictures below).

// Alice would like to know whether the area of her cloth expressed in square centimeters is prime. Could you help her to determine it?

// Input
// The first line contains a number t
//  (1≤t≤5
// ) — the number of test cases.

// Each of the next t
//  lines describes the i
// -th test case. It contains two integers a
//  and b (1≤b<a≤1011)
//  — the side length of Alice's square and the side length of the square that Bob wants.

// Output
// Print t
//  lines, where the i
// -th line is the answer to the i
// -th test case. Print "YES" (without quotes) if the area of the remaining piece of cloth is prime, otherwise print "NO".

// You can print each letter in an arbitrary case (upper or lower).

// Example
// inputCopy
// 4
// 6 5
// 16 13
// 61690850361 24777622630
// 34 33
// outputCopy
// YES
// NO
// NO
// YES
// Note
// The figure below depicts the first test case. The blue part corresponds to the piece which belongs to Bob, and the red part is the piece that Alice keeps for herself. The area of the red part is 62−52=36−25=11
// , which is prime, so the answer is "YES".


// In the second case, the area is 162−132=87
// , which is divisible by 3
// .


// In the third case, the area of the remaining piece is 616908503612−247776226302=3191830435068605713421
// . This number is not prime because 3191830435068605713421=36913227731⋅86468472991
// .

// In the last case, the area is 342−332=67
// .
#include<iostream>
using namespace std;

void io() {
#ifndef ONLINE_JUDGE
    freopen("in.text", "r", stdin);
    freopen("out.text", "w", stdout);
    freopen("err.text", "w", stderr);
#endif
}
using ll = long long ;

bool isPrime(ll x)
{
    if(x == 1) return false;
    for(ll d = 2; d*d <= x; d++)
    {
        if(x % d == 0) return false;
    }
    return true;
}

void solve()
{
    ll  a , b;
    cin >> a >> b;

    if((a-b == 1) && (isPrime(a + b))) 
    cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    io();

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}    


















