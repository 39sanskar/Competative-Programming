// Chef of the Year
// Chefs from all over the globe gather each year for an international convention. Each chef represents some country. Please, note that more than one chef can represent a country.

// Each of them presents their best dish to the audience. The audience then sends emails to a secret and secure mail server, with the subject being the name of the chef whom they wish to elect as the "Chef of the Year".

// You will be given the list of the subjects of all the emails. Find the country whose chefs got the most number of votes, and also the chef who got elected as the "Chef of the Year" (the chef who got the most number of votes).

// Note 1

// If several countries got the maximal number of votes, consider the country with the lexicographically smaller name among them to be a winner. Similarly if several chefs got the maximal number of votes, consider the chef with the lexicographically smaller name among them to be a winner.

// Note 2

// The string A = a1a2...an is called lexicographically smaller then the string B = b1b2...bm in the following two cases:

// there exists index i ≤ min{n, m} such that aj = bj for 1 ≤ j < i and ai < bi;
// A is a proper prefix of B, that is, n < m and aj = bj for 1 ≤ j ≤ n.
// The characters in strings are compared by their ASCII codes.

// Refer to function strcmp in C or to standard comparator < for string data structure in C++ for details.

// Input
// The first line of the input contains two space-separated integers N and M denoting the number of chefs and the number of emails respectively. Each of the following N lines contains two space-separated strings, denoting the name of the chef and his country respectively. Each of the following M lines contains one string denoting the subject of the email.

// Output
// Output should consist of two lines. The first line should contain the name of the country whose chefs got the most number of votes. The second line should contain the name of the chef who is elected as the "Chef of the Year".

// Constraints
// 1 ≤ N ≤ 10000 (104)
// 1 ≤ M ≤ 100000 (105)
// Each string in the input contains only letters of English alphabets (uppercase or lowercase)
// Each string in the input has length not exceeding 10
// All chef names will be distinct
// Subject of each email will coincide with the name of one of the chefs
// Sample 1:
// Input
// Output
// 1 3
// Leibniz Germany
// Leibniz
// Leibniz
// Leibniz
// Germany
// Leibniz
// Explanation:
// Example 1. Here we have only one chef Leibniz and he is from Germany. Clearly, all votes are for him. So Germany is the country-winner and Leibniz is the "Chef of the Year".

// Sample 2:
// Input
// Output
// 4 5
// Ramanujan India
// Torricelli Italy
// Gauss Germany
// Lagrange Italy
// Ramanujan
// Torricelli
// Torricelli
// Ramanujan
// Lagrange
// Italy
// Ramanujan
// Explanation:
// Example 2. Here we have chefs Torricelli and Lagrange from Italy, chef Ramanujan from India and chef Gauss from Germany. Torricelli got 2 votes, while Lagrange got one vote. Hence the Italy got 3 votes in all. Ramanujan got also 2 votes. And so India got 2 votes in all. Finally Gauss got no votes leaving Germany without votes. So the country-winner is Italy without any ties. But we have two chefs with 2 votes: Torricelli and Ramanujan. But since the string "Ramanujan" is lexicographically smaller than "Torricelli", then Ramanujan is the "Chef of the Year".

// Sample 3:
// Input
// Output
// 2 2
// Newton England
// Euclid Greece
// Newton
// Euclid
// England
// Euclid
// Explanation:
// Example 3. Here we have two countries with 1 vote: England and Greece. Since the string "England" is lexicographically smaller than "Greece", then England is the country-winner. Next, we have two chefs with 1 vote: Newton and Euclid. Since the string "Euclid" is lexicographically smaller than "Newton", then Euclid is the "Chef of the Year".

// Did you like the problem statement?
// 7 users found this helpful
// More Info
// Time limit1.5 secs
// Memory limit1.5 GB
// Source Limit50000 Bytes
#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;
    
    unordered_map<string, string> chefToCountry;
    unordered_map<string, int> chefVotes;
    unordered_map<string, int> countryVotes;
    
    // Read chef and country information
    for (int i = 0; i < N; ++i) {
        string chef, country;
        cin >> chef >> country;
        chefToCountry[chef] = country;
        chefVotes[chef] = 0;
        countryVotes[country] = 0;
    }
    
    // Read and process email subjects (votes)
    for (int i = 0; i < M; ++i) {
        string subject;
        cin >> subject;
        
        // Increment vote count for chef
        chefVotes[subject]++;
        
        // Increment vote count for corresponding country
        string country = chefToCountry[subject];
        countryVotes[country]++;
    }
    
    // Find the country with the maximum votes
    string winningCountry = "";
    int maxCountryVotes = -1;
    
    for (auto& pair : countryVotes) {
        string country = pair.first;
        int votes = pair.second;
        
        if (votes > maxCountryVotes || (votes == maxCountryVotes && country < winningCountry)) {
            maxCountryVotes = votes;
            winningCountry = country;
        }
    }
    
    // Find the chef with the maximum votes
    string winningChef = "";
    int maxChefVotes = -1;
    
    for (auto& pair : chefVotes) {
        string chef = pair.first;
        int votes = pair.second;
        
        if (votes > maxChefVotes || (votes == maxChefVotes && chef < winningChef)) {
            maxChefVotes = votes;
            winningChef = chef;
        }
    }
    
    // Output results
    cout << winningCountry << "\n";
    cout << winningChef << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
