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
//. This number is not prime because 
#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // Calculate the area of the remaining L-shaped cloth
        long long area = a * a - b * b;
        
        // Check if area is prime
        if (is_prime(area)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

