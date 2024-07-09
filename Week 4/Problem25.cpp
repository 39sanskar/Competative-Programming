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
// H. Skyline
// time limit per test2 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyansh is passionate about architecture, and he's designing a unique skyline for a futuristic city called Neo Zenith. He wants to create a series of n
//  skyscrapers, where the i
// -th skyscraper is currently ai
//  units tall. To make the skyline more harmonious, he plans to add uniform extra special floors above the buildings as follows:

// Choose an integer h≥1
//  — the special floor height. Add special floors up to height h
//  on both ends of the skyline.
// Then, extend special floors from each skyscraper up to height h
// , unless the skyscraper is already taller than h
// ; in that case, no special floors are added to this skyscraper.
// For example, with skyscrapers of heights a=[3,1,2,4,6,2,5]
//  and a special floor height of h=4
// , Priyansh will need a total of w=8
//  units of special flooring, as illustrated.


// Priyansh has a limited supply of special flooring material that can cover at most x
//  units. He wants to create the tallest possible uniform special floor addition. What is the maximum value of h
//  he can choose? (Each tower with height smaller than h
//  must be extended to height h
// )

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// For each test case:

// The first line contains two positive integers n
//  and x
//  (1≤n≤2⋅105
// ; 1≤x≤109
// ) — the number of skyscrapers and the maximum amount of special flooring available.

// The second line contains n
//  space-separated integers ai
//  (1≤ai≤109
// ) — the heights of the skyscrapers.

// The sum of n
//  across all test cases doesn't exceed 2⋅105
// .

// Output
// For each test case, output a single positive integer h
//  (h≥1
// ) — the maximum special floor height achievable using at most x
//  units of special flooring.

// It is guaranteed that under these constraints, such a value of h
//  always exists.

// Example
// inputCopy
// 5
// 7 9
// 3 1 2 4 6 2 5
// 3 10
// 1 1 1
// 4 1
// 1 4 3 4
// 6 1984
// 2 6 5 9 1 8
// 1 1000000000
// 1
// outputCopy
// 4
// 4
// 2
// 335
// 1000000001
// Note
// In the first test case, as shown in the image, with h=4
//  we need 8
//  units of special flooring, but if h
//  is increased to 5
//  we need 13
//  units, exceeding the available x=9
// . Thus, h=4
//  is optimal.

// For the second test case, we can set h=4
//  and add 3
//  units of special flooring to each skyscraper, using a total of 9
//  units. This is proven to be optimal. In the third test case, setting h=2
//  uses all available special flooring, making it the optimal choice.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the amount of special flooring needed to achieve height h
long long requiredFlooring(const vector<int>& heights, int h) {
    long long total = 0;
    for (int height : heights) {
        if (height < h) {
            total += h - height;
        }
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        
        vector<int> heights(n);
        int max_height = 0;
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
            if (heights[i] > max_height) {
                max_height = heights[i];
            }
        }
        
        int low = 1, high = max_height + x + 1;
        while (low < high) {
            int mid = (low + high + 1) / 2;
            if (requiredFlooring(heights, mid) <= x) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        
        cout << low << "\n";
    }
    
    return 0;
}
