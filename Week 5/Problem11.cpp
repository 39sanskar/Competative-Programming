// B. Divan and a New Project
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// The company "Divan's Sofas" is planning to build n+1
//  different buildings on a coordinate line so that:

// the coordinate of each building is an integer number;
// no two buildings stand at the same point.
// Let xi
//  be the coordinate of the i
// -th building. To get from the building i
//  to the building j
// , Divan spends |xi−xj|
//  minutes, where |y|
//  is the absolute value of y
// .

// All buildings that Divan is going to build can be numbered from 0
//  to n
// . The businessman will live in the building 0
// , the new headquarters of "Divan's Sofas". In the first ten years after construction Divan will visit the i
// -th building ai
//  times, each time spending 2⋅|x0−xi|
//  minutes for walking.

// Divan asks you to choose the coordinates for all n+1
//  buildings so that over the next ten years the businessman will spend as little time for walking as possible.

// Input
// Each test contains several test cases. The first line contains one integer number t
//  (1≤t≤103
// ) — the number of test cases.

// The first line of each case contains an integer n
//  (1≤n≤2⋅105
// ) — the number of buildings that "Divan's Sofas" is going to build, apart from the headquarters.

// The second line contains the sequence a1,a2,…,an
//  (0≤ai≤106
// ), where ai
//  is the number of visits to the i
// -th building.

// It is guaranteed that the sum of n
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, on the first line print the number T
//  — the minimum time Divan will spend walking.

// On the second line print the sequence x0,x1,…,xn
//  of n+1
//  integers, where xi
//  (−106≤xi≤106
// ) is the selected coordinate of the i
// -th building. It can be shown that an optimal answer exists with coordinates not exceeding 106
// .

// If there are multiple answers, print any of them.

// Example
// inputCopy
// 4
// 3
// 1 2 3
// 5
// 3 8 10 6 1
// 5
// 1 1 1 1 1
// 1
// 0
// outputCopy
// 14
// 2 4 1 3
// 78
// 1 -1 0 2 3 4
// 18
// 3 6 1 5 2 4
// 0
// 1 2
// Note
// Let's look at the first example.

// Divan will visit the first building a1=1
//  times, the second a2=2
//  times and the third a3=3
//  times. Then one of the optimal solution will be as follows:

// the headquarters is located in x0=2
// ;
// x1=4
// : Divan will spend 2⋅|x0−x1|⋅a1=2⋅|2−4|⋅1=4
//  minutes walking to the first building;
// x2=1
// : Divan will spend 2⋅|x0−x2|⋅a2=2⋅|2−1|⋅2=4
//  minutes walking to the second building;
// x3=3
// : Divan will spend 2⋅|x0−x3|⋅a3=2⋅|2−3|⋅3=6
//  minutes walking to the third building.
// In total, Divan will spend 4+4+6=14
//  minutes. It can be shown that it is impossible to arrange buildings so that the businessman spends less time.

// Among others, x=[1,3,2,0]
// , x=[−5,−3,−6,−4]
//  are also correct answers for the first example.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Building {
    int visits;
    int index;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<Building> buildings(n);
        for (int i = 0; i < n; ++i) {
            cin >> buildings[i].visits;
            buildings[i].index = i;
        }
        
        // Sort buildings based on the number of visits in descending order
        sort(buildings.begin(), buildings.end(), [](const Building &a, const Building &b) {
            return a.visits > b.visits;
        });
        
        vector<int> coordinates(n + 1, 0);
        long long total_time = 0;
        int pos = 1; // Positive positions
        int neg = -1; // Negative positions
        
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                coordinates[buildings[i].index + 1] = pos;
                total_time += 2LL * pos * buildings[i].visits;
                pos++;
            } else {
                coordinates[buildings[i].index + 1] = neg;
                total_time += 2LL * (-neg) * buildings[i].visits;
                neg--;
            }
        }
        
        cout << total_time << "\n";
        for (int i = 0; i <= n; ++i) {
            cout << coordinates[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}






