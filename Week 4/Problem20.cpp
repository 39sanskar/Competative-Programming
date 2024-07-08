// J. Recycling Centers
// time limit per test1 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// In the bustling city of Numeropolis, Mayor Abhay has initiated a citywide recycling program. Each day, the city collects n
//  recyclable items that need to be distributed among k
//  recycling centers and k=3
//  for this question. To ensure efficient processing, Mayor Abhay has established the following guidelines:

// Each recycling center must receive at least one item.
// The total number of items distributed among the 3
//  recycling centers (a1,a2,a3)
//  must equal n
//  i.e. a1+a2+a3=n
// .
// To prevent overload, the least common multiple (LCM) of the number of items each center receives must not exceed n2
// , i.e. lcm(a1,a2,a3)<=n2
// .
// As the city's logistics expert, your task is to determine a valid distribution of items to the recycling centers that meets these criteria.

// Input
// The first line contains a single integer t
//  (1≤t≤104)
//  — the number of days for which you need to plan the distribution. For each day, there is one line containing two integers n
//  and k
//  (3≤n≤109,k=3)
//  — the total number of recyclable items and the number of recycling centers, respectively.

// Output
// For each day, output k
//  positive integers a1,a2,…,ak
// , representing the number of items each recycling center should receive. These numbers must satisfy all the given conditions.

// Example
// inputCopy
// 3
// 3 3
// 8 3
// 14 3
// outputCopy
// 1 1 1
// 4 2 2
// 2 6 6
#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k = 3;  // k is always 3

    cin >> n;

    // Distribute items equally with at least 1 per center
    int base = n / k;
    int remainder = n % k;

    // Assign remaining items to first centers to ensure LCM <= n^2
    for (int i = 0; i < remainder; ++i) {
      cout << base + 1 << " ";
    }

    // Assign base items to remaining centers
    for (int i = remainder; i < k; ++i) {
      cout << base << " ";
    }

    cout << endl;
  }

  return 0;
}