// D. Duo-Prime
// time limit per test2 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyansh is a young coder who loves to explore number properties. He has recently discovered a special type of number that he calls "duo-prime numbers". A duo-prime number is defined as a positive integer that has exactly two distinct prime factors.

// For example:

// - 6(2×3),18(2×3×3),
//  and 24(2×2×2×3)
//  are duo-prime numbers.

// - 4(2×2),8(2×2×2),9(3×3),
//  and 42(2×3×7)
//  are not duo-prime numbers.

// Priyansh's wants to count the duo-prime numbers from 1
//  to n
//  (inclusive). Can you help Priyansh solve this challenge?

// Input
// The input consists of a single line containing one integer n
//  (1≤n≤3000
// ), representing the upper limit of the range Dhruvil is interested in.

// Output
// Output a single integer representing the count of duo-prime numbers from 1
//  to n
// , inclusive.

// Examples
// inputCopy
// 10
// outputCopy
// 2
// inputCopy
// 21
// outputCopy
// 8
#include <iostream>
#include <vector>

using namespace std;

int countDuoPrimes(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primeCount(n + 1, 0); // To count distinct prime factors
    
    // Sieve of Eratosthenes
    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    
    // Counting distinct prime factors using the sieve
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i; j <= n; j += i) {
                primeCount[j]++;
            }
        }
    }
    
    // Count duo-prime numbers
    int duoPrimeCount = 0;
    for (int i = 2; i <= n; ++i) {
        if (primeCount[i] == 2) {
            duoPrimeCount++;
        }
    }
    
    return duoPrimeCount;
}

int main() {
    int n;
    cin >> n;
    
    int result = countDuoPrimes(n);
    cout << result << endl;
    
    return 0;
}


