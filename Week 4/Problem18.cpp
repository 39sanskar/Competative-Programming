// G. Trio Prime Sum
// time limit per test2 s.
// memory limit per test64 MB
// inputstandard input
// outputstandard output
// Priyansh is a young mathematician who loves to explore number patterns. He recently learned about prime numbers and became fascinated by them. Inspired by famous mathematical conjectures, Priyansh decided to create his own number theory challenge called the "Trio Prime Sum."

// The Trio Prime Sum challenge works like this:

// - Take any prime number.

// - Try to express it as the sum of three integers: two consecutive prime numbers and 1
// . (Remember, two primes are considered consecutive if there are no other prime numbers between them.)

// - For example, 19=7+11+1
// , or 13=5+7+1
// .

// Priyansh wonders how many prime numbers in a given range can be expressed this way. He challenges his friend Dhruvil to verify if at least k
//  prime numbers from 2
//  to n
//  (inclusive) can be expressed as the sum of two consecutive primes plus 1
// .

// Can you help Dhruvil solve Priyansh's challenge?

// Input
// The input consists of a single line containing two integers n
//  and k
//  (2≤n≤1000
// , 0≤k≤1000
// ).

// - n
//  represents the upper limit of the range of numbers to consider (from 2 to n
// , inclusive).

// - k
//  represents the minimum number of primes that should satisfy the Trio Prime Sum property.

// Output
// Output YES if at least k
//  prime numbers from 2 to n
//  (inclusive) can be expressed as the sum of two consecutive primes plus 1. Output NO otherwise.

// Examples
// inputCopy
// 27 2
// outputCopy
// YES
// inputCopy
// 45 7
// outputCopy
// NO
// Note
// In the first example, the answer is YES because at least two numbers can be expressed in the required form (for instance, 13 and 19).

// In the second example, the answer is NO because it's not possible to find 7 prime numbers from 2 to 45 that satisfy the Trio Prime Sum property.
#include <iostream>
#include <vector>
using namespace std;

// Function to perform Sieve of Eratosthenes and find all primes up to n
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    
    return is_prime;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    // Find all prime numbers up to n using Sieve of Eratosthenes
    vector<bool> is_prime = sieve(n);
    
    // Generate all prime numbers up to n
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    
    // Count numbers that can be expressed as p = p1 + p2 + 1
    int count = 0;
    for (int i = 0; i < primes.size() - 1; ++i) {
        int p1 = primes[i];
        int p2 = primes[i + 1];
        int candidate = p1 + p2 + 1;
        if (candidate <= n && is_prime[candidate]) {
            count++;
        }
    }
    
    // Output result based on count
    if (count >= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
