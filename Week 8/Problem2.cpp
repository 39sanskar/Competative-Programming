// C - Anti-Division  / 
// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 300 points

// Problem Statement
// You are given four integers 
// A, 
// B, 
// C, and 
// D. Find the number of integers between 
// A and 
// B (inclusive) that can be evenly divided by neither 
// C nor 
// D.

// Constraints
// 1≤A≤B≤10 
// 18
 
// 1≤C,D≤10 
// 9
 
// All values in input are integers.
// Input
// Input is given from Standard Input in the following format:

// A 
// B 
// C 
// D
// Output
// Print the number of integers between 
// A and 
// B (inclusive) that can be evenly divided by neither 
// C nor 
// D.

// Sample Input 1
// Copy
// 4 9 2 3
// Sample Output 1
// Copy
// 2
// 5 and 
// 7 satisfy the condition.

// Sample Input 2
// Copy
// 10 40 6 8
// Sample Output 2
// Copy
// 23
// Sample Input 3
// Copy
// 314159265358979323 846264338327950288 419716939 937510582
// Sample Output 3
// Copy
// 532105071133627368
#include <iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll countDivisible(ll A, ll B, ll C, ll D) {
    ll countC = B / C - (A - 1) / C;
    ll countD = B / D - (A - 1) / D;
    ll lcmCD = lcm(C, D);
    ll countCD = B / lcmCD - (A - 1) / lcmCD;

    ll totalDivisible = countC + countD - countCD;
    return totalDivisible;
}

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    ll totalNumbers = B - A + 1;
    ll divisibleNumbers = countDivisible(A, B, C, D);
    ll nonDivisibleNumbers = totalNumbers - divisibleNumbers;

    cout << nonDivisibleNumbers << endl;

    return 0;
}







