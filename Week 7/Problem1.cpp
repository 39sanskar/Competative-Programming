// A. Lucky Division
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

// Input
// The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

// Output
// In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

// Examples
// inputCopy
// 47
// outputCopy
// YES
// inputCopy
// 16
// outputCopy
// YES
// inputCopy
// 78
// outputCopy
// NO
// Note
// Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

// In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.
#include <iostream>
#include <vector>

using namespace std;

// Function to check if a number is almost lucky
bool isAlmostLucky(int n) {
    vector<int> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477,
                                744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747,
                                4774, 4777, 7444, 7447, 7474, 7477, 7744, 7747, 7774, 7777};
    
    // Check if n is divisible by any lucky number
    for (int lucky : luckyNumbers) {
        if (n % lucky == 0) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int n;
    cin >> n;
    
    if (isAlmostLucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}



