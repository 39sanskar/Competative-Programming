// C. Puzzleland
// time limit per test1 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyansh and Dhruvil are best friends who love solving puzzles. They've recently discovered a new puzzle book called "The Mystic Challenges of Puzzleland" which contains n challenging puzzles. Both friends are excited to complete all the puzzles in the book.

// However, Priyansh and Dhruvil have different strengths when it comes to puzzle-solving. Priyansh can solve certain types of puzzles, while Dhruvil excels at others. They decide to team up and combine their skills to try and solve all the puzzles in the book.

// Given the information about which puzzles each friend can solve, can you determine if Priyansh and Dhruvil will be able to complete the entire puzzle book by working together?

// Input
// The first line contains a single integer n
//  (1≤n≤100)
// , representing the total number of puzzles in the book.

// The second line starts with an integer p
//  (0≤p≤n)
// , followed by p distinct integers a1,a2,...,ap
//  (1≤ai≤n)
// . These integers represent the puzzle numbers that Priyansh can solve.

// The third line follows the same format for Dhruvil: it starts with an integer q
//  (0≤q≤n)
// , followed by q
//  distinct integers representing the puzzle numbers Dhruvil can solve.

// Note: Puzzles are numbered from 1
//  to n
// .

// Output
// If Priyansh and Dhruvil can solve all the puzzles together, print "I become the guy.". If it's impossible for them to solve all puzzles, print "Oh, my keyboard!" (without the quotes).

// Examples
// inputCopy
// 4
// 3 1 2 3
// 2 2 4
// outputCopy
// I become the guy.
// inputCopy
// 4
// 3 1 2 3
// 2 2 3
// outputCopy
// Oh, my keyboard!
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; // total number of puzzles

    int p;
    cin >> p; // number of puzzles Priyansh can solve
    unordered_set<int> priyansh_puzzles;
    for (int i = 0; i < p; ++i) {
        int puzzle_number;
        cin >> puzzle_number;
        priyansh_puzzles.insert(puzzle_number);
    }

    int q;
    cin >> q; // number of puzzles Dhruvil can solve
    unordered_set<int> dhruvil_puzzles;
    for (int i = 0; i < q; ++i) {
        int puzzle_number;
        cin >> puzzle_number;
        dhruvil_puzzles.insert(puzzle_number);
    }

    // Combine the sets of puzzles they can solve
    unordered_set<int> combined_puzzles;
    for (int puzzle_number : priyansh_puzzles) {
        combined_puzzles.insert(puzzle_number);
    }
    for (int puzzle_number : dhruvil_puzzles) {
        combined_puzzles.insert(puzzle_number);
    }

    // Check if they can solve all puzzles from 1 to n
    if (combined_puzzles.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}









