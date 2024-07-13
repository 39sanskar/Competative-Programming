// D. Even-Odd Game
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// During their New Year holidays, Alice and Bob play the following game using an array a
//  of n
//  integers:

// Players take turns, Alice moves first.
// Each turn a player chooses any element and removes it from the array.
// If Alice chooses even value, then she adds it to her score. If the chosen value is odd, Alice's score does not change.
// Similarly, if Bob chooses odd value, then he adds it to his score. If the chosen value is even, then Bob's score does not change.
// If there are no numbers left in the array, then the game ends. The player with the highest score wins. If the scores of the players are equal, then a draw is declared.

// For example, if n=4
//  and a=[5,2,7,3]
// , then the game could go as follows (there are other options):

// On the first move, Alice chooses 2
//  and get two points. Her score is now 2
// . The array a
//  is now [5,7,3]
// .
// On the second move, Bob chooses 5
//  and get five points. His score is now 5
// . The array a
//  is now [7,3]
// .
// On the third move, Alice chooses 7
//  and get no points. Her score is now 2
// . The array a
//  is now [3]
// .
// On the last move, Bob chooses 3
//  and get three points. His score is now 8
// . The array a
//  is empty now.
// Since Bob has more points at the end of the game, he is the winner.
// You want to find out who will win if both players play optimally. Note that there may be duplicate numbers in the array.

// Input
// The first line contains an integer t
//  (1≤t≤104
// ) — the number of test cases. Then t
//  test cases follow.

// The first line of each test case contains an integer n
//  (1≤n≤2⋅105
// ) — the number of elements in the array a
// .

// The next line contains n
//  integers a1,a2,…,an
//  (1≤ai≤109
// ) — the array a
//  used to play the game.

// It is guaranteed that the sum of n
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, output on a separate line:

// "Alice" if Alice wins with the optimal play;
// "Bob" if Bob wins with the optimal play;
// "Tie", if a tie is declared during the optimal play.
// Example
// inputCopy
// 4
// 4
// 5 2 7 3
// 3
// 3 2 1
// 4
// 2 2 2 2
// 2
// 7 8
// outputCopy
// Bob
// Tie
// Alice
// Alice
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &num : a) cin >> num;

    // Sort the array in descending order
    sort(a.rbegin(), a.rend());

    long long aliceScore = 0, bobScore = 0;

    // Simulate the game
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) { // Alice's turn
            if (a[i] % 2 == 0) aliceScore += a[i];
        } else { // Bob's turn
            if (a[i] % 2 != 0) bobScore += a[i];
        }
    }

    // Determine the result
    if (aliceScore > bobScore) {
        cout << "Alice" << endl;
    } else if (bobScore > aliceScore) {
        cout << "Bob" << endl;
    } else {
        cout << "Tie" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}



