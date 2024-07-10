// J. Hypersensitive
// time limit per test3 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Abhay is a software engineer at Cybercity's leading smartphone manufacturer. He's developing a new algorithm to identify typing errors caused by hypersensitive touchscreens. Some customers have reported that when they tap a letter on their touchscreen, it occasionally registers multiple taps, resulting in the letter appearing more than once.

// For instance, if a user attempts to type "hello", their hypersensitive touchscreen might produce "hello", "hhhhello", or "hheeeellllooo", but it cannot produce "hell", "helo", or "hhllllooo".

// To evaluate his error detection algorithm, Abhay needs to analyze pairs of words: the intended word and the potentially erroneous version.

// You are Dhruvil, Abhay's junior developer, assigned to assist him in validating his algorithm. You'll receive a list of word pairs. For each pair, you need to determine if the second word could be the result of typing the first word on a hypersensitive touchscreen.

// Input
// The first line contains an integer n
//  (1≤n≤105
// ) — the number of word pairs to analyze.

// The next 2n
//  lines describe the word pairs:

// - For each pair, the first line contains a non-empty word s
//  of lowercase English letters — the intended word.

// - The second line contains a non-empty word t
//  of lowercase English letters — the potentially erroneous version.

// The length of each word doesn't exceed 106
//  characters.

// The total length of all s
//  words and the total length of all t
//  words are each no more than 106
//  characters.

// Output
// Output n
//  lines. For the i
// -th word pair, print "YES" if the second word could be the result of typing the first word on a hypersensitive touchscreen. Otherwise, print "NO".

// Examples
// inputCopy
// 4
// hello
// hello
// hello
// helloo
// hello
// hlllloo
// hello
// helo
// outputCopy
// YES
// YES
// NO
// NO
// inputCopy
// 5
// aa
// bb
// codeforces
// codeforce
// polycarp
// poolycarpp
// aaaa
// aaaab
// abcdefghijklmnopqrstuvwxyz
// zabcdefghijklmnopqrstuvwxyz
// outputCopy
// NO
// NO
// YES
// NO
// NO
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool canBeHypersensitive(const string& s, const string& t) {
    int n = s.size();
    int m = t.size();
    
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (s[i] != t[j]) {
            return false;
        }
        
        char current = s[i];
        int countS = 0, countT = 0;
        
        // Count consecutive characters in s
        while (i < n && s[i] == current) {
            ++countS;
            ++i;
        }
        
        // Count consecutive characters in t
        while (j < m && t[j] == current) {
            ++countT;
            ++j;
        }
        
        if (countT < countS) {
            return false;
        }
    }
    
    // If there are remaining characters in s or t
    return (i == n && j == m);
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // to ignore the newline after reading n
    
    while (n--) {
        string s, t;
        getline(cin, s);
        getline(cin, t);
        
        if (canBeHypersensitive(s, t)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
