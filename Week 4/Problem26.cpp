// H. Birthday Invitation
// time limit per test2 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyansh is planning a surprise birthday party for his friend Tushar. He wants to create a unique invitation using letters cut out from a single magazine headline. Priyansh has chosen a specific headline and knows the exact text he wants to use for the invitation.

// Here are the rules Priyansh must follow:

// 1. He can use each letter from the magazine headline only once.

// 2. He doesn't need to cut out spaces from the headline - he'll leave blank spaces in the invitation where needed.

// 3. Uppercase and lowercase letters are considered different and cannot be interchanged.

// Help Priyansh determine if he can create his desired invitation text using only the letters from the chosen magazine headline.

// Input
// The first line contains the magazine headline s1
// .

// The second line contains Priyansh's desired invitation text s2
// .

// Both s₁ and s₂ are non-empty strings consisting of spaces, uppercase and lowercase Latin letters. The length of each string does not exceed 200
//  characters.

// Output
// If Priyansh can create his desired invitation text using the magazine headline, print "YES". Otherwise, print "NO".

// Examples
// inputCopy
// Instead of dogging Your footsteps it disappears but you dont notice anything
// where is your dog
// outputCopy
// NO
// inputCopy
// Instead of dogging Your footsteps it disappears but you dont notice anything
// Your dog is upstears
// outputCopy
// YES
// inputCopy
// Instead of dogging your footsteps it disappears but you dont notice anything
// Your dog is upstears
// outputCopy
// NO
// inputCopy
// abcdefg hijk
// k j i h g f e d c b a
// outputCopy
// YES
// Note
// Remember that Priyansh must use each letter from the headline at most once, and he cannot cut out or use the spaces from the headline. The invitation text might require fewer letters than are available in the headline.
#include <iostream>
#include <cstring>

using namespace std;

bool canFormInvitation(string s1, string s2) {
    // Initialize arrays to count occurrences of each letter (case-sensitive)
    int count_s1_upper[26] = {0};
    int count_s1_lower[26] = {0};
    int count_s2_upper[26] = {0};
    int count_s2_lower[26] = {0};
    
    // Count frequencies in s1
    for (char ch : s1) {
        if (isupper(ch)) {
            count_s1_upper[ch - 'A']++;
        } else if (islower(ch)) {
            count_s1_lower[ch - 'a']++;
        }
    }
    
    // Count frequencies in s2
    for (char ch : s2) {
        if (isupper(ch)) {
            count_s2_upper[ch - 'A']++;
        } else if (islower(ch)) {
            count_s2_lower[ch - 'a']++;
        }
    }
    
    // Check if s1 can form s2
    for (int i = 0; i < 26; ++i) {
        if (count_s2_upper[i] > count_s1_upper[i] || count_s2_lower[i] > count_s1_lower[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s1, s2;
    getline(cin, s1); // Read the magazine headline
    getline(cin, s2); // Read Priyansh's desired invitation text
    
    if (canFormInvitation(s1, s2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}















