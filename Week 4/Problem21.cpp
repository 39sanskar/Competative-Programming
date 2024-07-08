// I. Color Trail
// time limit per test1 s.
// memory limit per test64 MB
// inputstandard input
// outputstandard output
// Priyam loves to play video games on his mobile phone. He's particularly fond of a new game called "Color Trail" where players have to memorize sequences of colors as they appear on the screen.

// One day, while playing "Color Trail", Priyam got distracted once. He managed to remember two separate sequences of colors before and after distraction. Now he's curious if these sequences could have appeared in the game, either in the original order or in reverse.

// In "Color Trail", colors are represented by lowercase letters. The same letter always represents the same color, and different letters represent different colors.

// Priyam's friend Abhay, who's good at puzzles, wants to help. Given the full sequence of colors in the game and the two sequences Priyam remembers, can you help Abhay determine if Priyam's recollection matches the game?

// Input
// The input contains three lines:

// The first line contains a non-empty string of lowercase Latin letters, length not exceeding 105
// , representing the full sequence of colors in the game.

// The second line contains a non-empty string of lowercase Latin letters, length not exceeding 100
// , representing the first sequence Priyam remembers.

// The third line contains a non-empty string of lowercase Latin letters, length not exceeding 100
// , representing the second sequence Priyam remembers.

// Each of Priyam's remembered sequences is in chronological order.

// Output
// Output one of these four words:

// - "forward" if Priyam's sequences could only match the game's original order

// - "backward" if Priyam's sequences could only match the game's reverse order

// - "both" if Priyam's sequences could match either the original or reverse order

// - "fantasy" if Priyam's sequences couldn't possibly match the game

// Examples
// inputCopy
// atob
// a
// b
// outputCopy
// forward
// inputCopy
// aaacaaa
// aca
// aa
// outputCopy
// both
// inputCopy
// aab
// b
// aa
// outputCopy
// backward
// Note
// In "Color Trail", each color appears only once as the game progresses, so the same color can't be seen twice in a row. The first and last colors of the full sequence are not included in Priyam's recollections.
#include <iostream>
using namespace std;

string soln(string& full, string& first, string& second) {
    int n = full.size();
    int m1 = first.size();
    int m2 = second.size();
    
    // Check if the first and last colors are included in the remembered sequences
    if (full[0] == first[0] || full[n-1] == second[m2-1]) {
        return "fantasy";
    }
    
    // Check if the remembered sequences match the game in forward order
    int i = 0, j = 0;
    while (i < m1 && j < n) {
        if (first[i] != full[j]) {
            break;
        }
        i++;
        j++;
    }
    if (i == m1) {
        // Check if the second sequence matches the remaining part of the game
        i = 0;
        while (i < m2 && j < n) {
            if (second[i] != full[j]) {
                break;
            }
            i++;
            j++;
        }
        if (i == m2 && j == n) {
            return "forward";
        }
    }
    
    // Check if the remembered sequences match the game in backward order
    i = m1 - 1;
    j = n - 1;
    while (i >= 0 && j >= 0) {
        if (first[i] != full[j]) {
            break;
        }
        i--;
        j--;
    }
    if (i == -1) {
        // Check if the second sequence matches the remaining part of the game
        i = m2 - 1;
        while (i >= 0 && j >= 0) {
            if (second[i] != full[j]) {
                break;
            }
            i--;
            j--;
        }
        if (i == -1 && j == -1) {
            return "backward";
        }
    }
    
    // Check if the remembered sequences match the game in both orders
    i = 0;
    j = n - 1;
    while (i < m1 && j >= 0) {
        if (first[i] != full[j]) {
            break;
        }
        i++;
        j--;
    }
    if (i == m1) {
        // Check if the second sequence matches the remaining part of the game
        i = 0;
        while (i < m2 && j >= 0) {
            if (second[i] != full[j]) {
                break;
            }
            i++;
            j--;
        }
        if (i == m2 && j == -1) {
            return "both";
        }
    }
    
    return "fantasy";
}

int main() {
    string full, first, second;
    cin >> full >> first >> second;
    
    cout << soln(full, first, second) << "\n";
    
    return 0;
}
