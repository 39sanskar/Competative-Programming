// Problem
// Given 'n', print the symbol 'Z' spanning n rows using '*' symbol. Value of n>2 and n<=20.

// Example:
// 1) Input : n=3
// Output:
// ***
//  *
// ***

// 2) Input n=4
// Output:
// ****
//   *
//  *
// ****
// Sample Input
// 5
// Sample Output
// *****
//    *
//   *
//  *
// *****
// Time Limit: 5
// Memory Limit: 256
// Source Limit:
// Explanation
// The 'Z' is printed across 5 lines as shown above.
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
