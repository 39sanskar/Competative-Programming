// Given a number N. Print the Fibonacci number of N.

// Note: In order to create the Fibonacci sequence use the following function:

// fib(1) = 0.
// fib(2) = 1.
// fib(n) = fib(n - 1) + fib(n - 2).
// Input
// Only one line containing a number N (1 ≤ N ≤ 50).

// Output
// Print the Fibonacci number of N.

// Examples
// inputCopy
// 1
// outputCopy
// 0
// inputCopy
// 5
// outputCopy
// 3
// Note
// For more information visit Fibonacci: https://www.mathsisfun.com/numbers/fibonacci-sequence.html.
#include <iostream>
#include <vector>

long long fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    std::vector<long long> fib(n + 1);
    fib[1] = 0;
    fib[2] = 1;
    
    for (int i = 3; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    return fib[n];
}

int main() {
    int n;
    std::cin >> n;
    
    std::cout << fibonacci(n) << std::endl;
    
    return 0;
}
