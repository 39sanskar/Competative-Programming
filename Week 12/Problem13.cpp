// Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

// Return the sorted string. If there are multiple answers, return any of them.

 

// Example 1:

// Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
// Example 2:

// Input: s = "cccaaa"
// Output: "aaaccc"
// Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
// Note that "cacaca" is incorrect, as the same characters must be together.
// Example 3:

// Input: s = "Aabb"
// Output: "bbAa"
// Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
// Note that 'A' and 'a' are treated as two different characters.
 

// Constraints:

// 1 <= s.length <= 5 * 105
// s consists of uppercase and lowercase English letters and digits.

// Seen this question in a real interview before?
// 1/5
// Yes
// No
// Accepted
// 762.3K
// Submissions
// 1M
// Acceptance Rate
// 72.8%
// Topics
// Companies
// Similar Questions
// Discussion (108)
// Choose a type
// Copyright ©️ 2024 LeetCode All rights reserved
class Solution {
public:
   
    string frequencySort(string s)
    {
        vector<pair<int , char>> v;
        map<char,int> mp;
        for(int i=0; i< s.size(); i++)
        {
            mp[s[i]]++;

        }
        for(auto i : mp)
        {
            v.push_back({i.second, i.first});
        }
        sort(v.rbegin() , v.rend());

        string ans;

        for(auto i : v)
        {
            for(int j=0; j<i.first; j++)
            {
                ans +=i.second;
            }
        }
        return ans;
    }
};










