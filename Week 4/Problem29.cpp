// B - Same Map in the RPG World  / 
// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 200 points

// Problem Statement
// Takahashi is developing an RPG. He has decided to write a code that checks whether two maps are equal.

// We have grids 
// A and 
// B with 
// H horizontal rows and 
// W vertical columns. Each cell in the grid has a symbol # or . written on it.
// The symbols written on the cell at the 
// i-th row from the top and 
// j-th column from the left in 
// A and 
// B are denoted by 
// A 
// i,j
// ​
//   and 
// B 
// i,j
// ​
//  , respectively.

// The following two operations are called a vertical shift and horizontal shift.

// For each 
// j=1,2,…,W, simultaneously do the following:
// simultaneously replace 
// A 
// 1,j
// ​
//  ,A 
// 2,j
// ​
//  ,…,A 
// H−1,j
// ​
//  ,A 
// H,j
// ​
//   with 
// A 
// 2,j
// ​
//  ,A 
// 3,j
// ​
//  ,…,A 
// H,j
// ​
//  ,A 
// 1,j
// ​
//  .
// For each 
// i=1,2,…,H, simultaneously do the following:
// simultaneously replace 
// A 
// i,1
// ​
//  ,A 
// i,2
// ​
//  ,…,A 
// i,W−1
// ​
//  ,A 
// i,W
// ​
//   with 
// A 
// i,2
// ​
//  ,A 
// i,3
// ​
//  ,…,A 
// i,W
// ​
//  ,A 
// i,1
// ​
//  .
// Is there a pair of non-negative integers 
// (s,t) that satisfies the following condition? Print Yes if there is, and No otherwise.

// After applying a vertical shift 
// s times and a horizontal shift 
// t times, 
// A is equal to 
// B.
// Here, 
// A is said to be equal to 
// B if and only if 
// A 
// i,j
// ​
//  =B 
// i,j
// ​
//   for all integer pairs 
// (i,j) such that 
// 1≤i≤H and 
// 1≤j≤W.

// Constraints
// 2≤H,W≤30
// A 
// i,j
// ​
//   is # or ., and so is 
// B 
// i,j
// ​
//  .
// H and 
// W are integers.
// Input
// The input is given from Standard Input in the following format:

// H 
// W
// A 
// 1,1
// ​
//  A 
// 1,2
// ​
//  …A 
// 1,W
// ​
 
// A 
// 2,1
// ​
//  A 
// 2,2
// ​
//  …A 
// 2,W
// ​
 
// ⋮
// A 
// H,1
// ​
//  A 
// H,2
// ​
//  …A 
// H,W
// ​
 
// B 
// 1,1
// ​
//  B 
// 1,2
// ​
//  …B 
// 1,W
// ​
 
// B 
// 2,1
// ​
//  B 
// 2,2
// ​
//  …B 
// 2,W
// ​
 
// ⋮
// B 
// H,1
// ​
//  B 
// H,2
// ​
//  …B 
// H,W
// ​
 
// Output
// Print Yes if there is a conforming integer pair 
// (s,t); print No otherwise.

// Sample Input 1
// Copy
// 4 3
// ..#
// ...
// .#.
// ...
// #..
// ...
// .#.
// ...
// Sample Output 1
// Copy
// Yes
// By choosing 
// (s,t)=(2,1), the resulting 
// A is equal to 
// B.
// We describe the procedure when 
// (s,t)=(2,1) is chosen. Initially, 
// A is as follows.

// ..#
// ...
// .#.
// ...
// We first apply a vertical shift to make 
// A as follows.

// ...
// .#.
// ...
// ..#
// Then we apply another vertical shift to make 
// A as follows.

// .#.
// ...
// ..#
// ...
// Finally, we apply a horizontal shift to make 
// A as follows, which equals 
// B.

// #..
// ...
// .#.
// ...
// Sample Input 2
// Copy
// 3 2
// ##
// ##
// #.
// ..
// #.
// #.
// Sample Output 2
// Copy
// No
// No choice of 
// (s,t) makes 
// A equal 
// B.

// Sample Input 3
// Copy
// 4 5
// #####
// .#...
// .##..
// ..##.
// ...##
// #...#
// #####
// ...#.
// Sample Output 3
// Copy
// Yes
// Sample Input 4
// Copy
// 10 30
// ..........##########..........
// ..........####....###.....##..
// .....##....##......##...#####.
// ....####...##..#####...##...##
// ...##..##..##......##..##....#
// #.##....##....##...##..##.....
// ..##....##.##..#####...##...##
// ..###..###..............##.##.
// .#..####..#..............###..
// #..........##.................
// ................#..........##.
// ######....................####
// ....###.....##............####
// .....##...#####......##....##.
// .#####...##...##....####...##.
// .....##..##....#...##..##..##.
// ##...##..##.....#.##....##....
// .#####...##...##..##....##.##.
// ..........##.##...###..###....
// ...........###...#..####..#...
// Sample Output 4
// Copy
// Yes
#include <iostream>
#include <vector>
using namespace std;

// Function to rotate grid A vertically
vector<string> verticalShift(const vector<string>& A, int shift) {
    int H = A.size();
    int W = A[0].size();
    vector<string> result(H, string(W, ' '));
    for (int i = 0; i < H; ++i) {
        result[(i + shift) % H] = A[i];
    }
    return result;
}

// Function to rotate grid A horizontally
vector<string> horizontalShift(const vector<string>& A, int shift) {
    int H = A.size();
    int W = A[0].size();
    vector<string> result(H, string(W, ' '));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            result[i][(j + shift) % W] = A[i][j];
    }
    }
    return result;
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H), B(H);

    for (int i = 0; i < H; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < H; ++i) {
        cin >> B[i];
    }

    // Try all possible vertical and horizontal shifts
    for (int s = 0; s < H; ++s) {
        for (int t = 0; t < W; ++t) {
            // Apply vertical shift s and horizontal shift t
            vector<string> shiftedA = verticalShift(A, s);
            shiftedA = horizontalShift(shiftedA, t);

            // Check if shifted A equals B
            if (shiftedA == B) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
















