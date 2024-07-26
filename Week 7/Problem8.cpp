<<<<<<< HEAD
// A. Noldbach problem
// time limit per test2 seconds
// memory limit per test64 megabytes
// Nick is interested in prime numbers. Once he read about Goldbach problem. It states that every even integer greater than 2 can be expressed as the sum of two primes. That got Nick's attention and he decided to invent a problem of his own and call it Noldbach problem. Since Nick is interested only in prime numbers, Noldbach problem states that at least k prime numbers from 2 to n inclusively can be expressed as the sum of three integer numbers: two neighboring prime numbers and 1. For example, 19 = 7 + 11 + 1, or 13 = 5 + 7 + 1.

// Two prime numbers are called neighboring if there are no other prime numbers between them.

// You are to help Nick, and find out if he is right or wrong.

// Input
// The first line of the input contains two integers n (2 ≤ n ≤ 1000) and k (0 ≤ k ≤ 1000).

// Output
// Output YES if at least k prime numbers from 2 to n inclusively can be expressed as it was described above. Otherwise output NO.

// Examples
// InputCopy
// 27 2
// OutputCopy
// YES
// InputCopy
// 45 7
// OutputCopy
// NO
// Note
// In the first sample the answer is YES since at least two numbers can be expressed as it was described (for example, 13 and 19). In the second sample the answer is NO since it is impossible to express 7 prime numbers from 2 to 45 in the desired form.

=======
// A. Co-prime Array
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given an array of n elements, you must make it a co-prime array in as few moves as possible.

// In each move you can insert any positive integral number you want not greater than 109 in any place in the array.

// An array is co-prime if any two adjacent numbers of it are co-prime.

// In the number theory, two integers a and b are said to be co-prime if the only positive integer that divides both of them is 1.

// Input
// The first line contains integer n (1 ≤ n ≤ 1000) — the number of elements in the given array.

// The second line contains n integers ai (1 ≤ ai ≤ 109) — the elements of the array a.

// Output
// Print integer k on the first line — the least number of elements needed to add to the array a to make it co-prime.

// The second line should contain n + k integers aj — the elements of the array a after adding k elements to it. Note that the new array should be co-prime, so any two adjacent values should be co-prime. Also the new array should be got from the original array a by adding k elements to it.

// If there are multiple answers you can print any one of them.

// Example
// inputCopy
// 3
// 2 7 28
// outputCopy
// 1
// 2 7 9 28
#include <iostream>
#include <vector>
#include <numeric> // For std::gcd

using namespace std;

// Function to check if two numbers are co-prime
bool isCoPrime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> result;
    int insertions = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        result.push_back(a[i]);
        if (!isCoPrime(a[i], a[i + 1])) {
            // Insert a '1' between non-co-prime pairs to make them co-prime
            result.push_back(1);
            ++insertions;
        }
    }
    // Don't forget to add the last element
    result.push_back(a[n - 1]);
    
    cout << insertions << endl;
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
>>>>>>> 9862229a61763ea7c931d68b1941d12a7b0b5a12
