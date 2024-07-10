// E. WUB
// time limit per test2 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyansh is a talented musician in Bangalore who loves creating remixes of classic songs. He has a unique style where he adds the word "WUB" throughout the original lyrics to give them a modern twist.

// To create a remix, Priyansh follows these rules:

// 1. He may add any number of "WUB" (including zero) before the first word of the song.

// 2. He may add any number of "WUB" (including zero) after the last word of the song.

// 3. He must add at least one "WUB" between every pair of consecutive words in the original song.

// 4. He then combines all the words, including the added "WUB"s, into a single string.

// For example, if the original song had the lyrics "I AM X", a valid remix could be "WUBWUBIWUBAMWUBWUBX", but "WUBWUBIAMWUBX" would not be valid because there's no "WUB" between "AM" and "X".

// Tushar, Priyansh's friend, heard one of these remixes and wants to figure out the original lyrics. Help Tushar recover the original song from Priyansh's remix.

// Input
// The input is a single non-empty string containing only uppercase English letters. The string's length does not exceed 200
//  characters.

// It is guaranteed that:

// - Before Priyansh's remix, no word in the original song contained the substring "WUB".

// - Priyansh did not change the order of the words.

// - The original song had at least one word.

// Output
// Print the words of the original song that Priyansh used to create his remix. Separate the words with a space.

// Examples
// inputCopy
// WUBWUBABCWUB
// outputCopy
// ABC 
// inputCopy
// WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
// outputCopy
// WE ARE THE CHAMPIONS MY FRIEND 
// Note
// In the first example: "WUBWUBABCWUB" = "WUB" + "WUB" + "ABC" + "WUB". This means the original song consisted of a single word "ABC", and all "WUB" were added by Priyansh.

// In the second example, Priyansh added a single "WUB" between most neighboring words, at the beginning, and at the end. However, between "ARE" and "THE", he added two "WUB"s.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<string> words;
    size_t start = 0;
    
    // Split the string by "WUB"
    while (start < s.size()) {
        size_t found = s.find("WUB", start);
        if (found == start) {
            start += 3; // Move past "WUB"
        } else {
            if (found == string::npos) {
                words.push_back(s.substr(start)); // Last word
                break;
            } else {
                words.push_back(s.substr(start, found - start)); // Add word
                start = found + 3; // Move past "WUB"
            }
        }
    }
    
    // Print the words separated by spaces
    for (size_t i = 0; i < words.size(); ++i) {
        cout << words[i];
        if (i != words.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}













