// D. Avoid Change
// time limit per test1 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Tushar urgently needs a tool! He visits a shop and finds an appropriate tool priced at k
//  credits. Fortunately, the shop has an unlimited supply of such tools.

// In his pocket, Tushar carries an unlimited number of "10-credit coins" and exactly one coin worth r
//  credits (1≤r≤9
// ).

// What is the minimum number of tools Tushar needs to buy so that he can pay for the purchase without any change? Although he can pay for 10 tools without any change using only "10-credit coins", perhaps he can buy fewer tools and pay without any change. Note that Tushar must buy at least one tool.

// Input
// The single line of input contains two integers k
//  and r
//  (1≤k≤1000
// , 1≤r≤9
// ) — the price of one tool and the denomination of the coin in Tushar's pocket that is different from "10-credit coins".

// Assume that he has an unlimited number of coins in the denomination of 10, ensuring that Tushar has enough money to buy any number of tools.

// Output
// Print the required minimum number of tools Tushar needs to buy so that he can pay for them without any change.

// Examples
// inputCopy
// 117 3
// outputCopy
// 9
// inputCopy
// 237 7
// outputCopy
// 1
// inputCopy
// 15 2
// outputCopy
// 2
// Note
// In the first example, Tushar can buy 9
//  tools and pay 9×117=1053
//  credits. He can pay this sum using certain number of 10
// -credit coins and one 3
// -credit coin. Tushar cannot buy fewer tools without any change.

// In the second example, it is sufficient for Tushar to buy one tool.

// In the third example, Tushar should buy two tools and pay 2×15=30
//  credits. It is obvious that he can pay this sum without any change.
#include <iostream>

using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    // Loop through to find the minimum number of tools Tushar needs to buy
    for (int x = 1; x <= 10; ++x) {
        if ((k * x) % 10 == 0 || (k * x) % 10 == r) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}







