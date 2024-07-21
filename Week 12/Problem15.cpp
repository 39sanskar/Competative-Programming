// A. Two Substrings
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given string s. Your task is to determine if the given string s contains two non-overlapping substrings "AB" and "BA" (the substrings can go in any order).

// Input
// The only line of input contains a string s of length between 1 and 105 consisting of uppercase Latin letters.

// Output
// Print "YES" (without the quotes), if string s contains two non-overlapping substrings "AB" and "BA", and "NO" otherwise.

// Examples
// inputCopy
// ABA
// outputCopy
// NO
// inputCopy
// BACFAB
// outputCopy
// YES
// inputCopy
// AXBYBXA
// outputCopy
// NO
// Note
// In the first sample test, despite the fact that there are substrings "AB" and "BA", their occurrences overlap, so the answer is "NO".

// In the second sample test there are the following occurrences of the substrings: BACFAB.

// In the third sample test there is no substring "AB" nor substring "BA".
#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    bool foundAB = false;
    bool foundBA = false;

    // Check for "AB" followed by "BA"
    for (int i = 0; i < s.length() - 1; ++i) {
        if (!foundAB && s[i] == 'A' && s[i + 1] == 'B') {
            foundAB = true;
            i++; // Skip the next character to avoid overlap
        } else if (foundAB && s[i] == 'B' && s[i + 1] == 'A') {
            cout << "YES" << endl;
            return;
        }
    }

    // Reset the flags and check for "BA" followed by "AB"
    foundAB = false;

    for (int i = 0; i < s.length() - 1; ++i) {
        if (!foundBA && s[i] == 'B' && s[i + 1] == 'A') {
            foundBA = true;
            i++; // Skip the next character to avoid overlap
        } else if (foundBA && s[i] == 'A' && s[i + 1] == 'B') {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
