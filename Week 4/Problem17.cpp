// F. Username
// time limit per test2 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Dhruvil is creating a new social media platform for Bangalore's tech community. To ensure unique usernames, he's devised a system that combines parts of a user's first and last name.

// The rules for generating usernames are as follows:

// 1. Take a prefix of the first name (can be the entire name).

// 2. Immediately follow it with a prefix of the last name (can be the entire name).

// 3. Both prefixes must contain at least one character.

// 4. The resulting username should be as short as possible while following alphabetical order.

// For example, if a user's name is "abhay kumar", valid usernames could be "ak", "abk", "abhk", "abhkumar", etc. The system should choose the alphabetically earliest option.

// As a reminder:

// - A prefix is a substring starting from the beginning of a word. For "rocket", valid prefixes are "r", "ro", "roc", "rock", "rocke", and "rocket".

// - Alphabetical order means: A string a
//  is alphabetically earlier than a string b
// , if a
//  is a prefix of b
// , or a
//  and b
//  coincide up to some position, and then a
//  has a letter that is alphabetically earlier than the corresponding letter in b
// : "a" and "ab" are alphabetically earlier than "ac" but "b" and "ba" are alphabetically later than "ac".

// Help Dhruvil create a function that generates the correct username for new users.

// Input
// The input consists of a single line containing two space-separated strings: the first and last names. Each name contains only lowercase English letters and is between 1 and 10 characters long.

// Output
// Output a single string - the alphabetically earliest possible username formed from these names. The output should also be in lowercase.

// Examples
// inputCopy
// harry potter
// outputCopy
// hap
// inputCopy
// tom riddle
// outputCopy
// tomr
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string first_name, last_name;
    cin >> first_name >> last_name;

    string min_username = first_name.substr(0, 1) + last_name.substr(0, 1);

    // Generate all possible prefixes and find the minimum alphabetically
    for (int i = 1; i <= first_name.length(); ++i) {
        for (int j = 1; j <= last_name.length(); ++j) {
            string username = first_name.substr(0, i) + last_name.substr(0, j);
            if (username < min_username) {
                min_username = username;
            }
        }
    }

    cout << min_username << endl;

    return 0;
}








