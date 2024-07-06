// A. Dice Game
// time limit per test1 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyansh and Priyam are engaged in a game where each player writes an integer from 1 to 6 on a piece of paper. Subsequently, a six-sided dice is thrown, and the player whose written number is closer to the number on the dice wins the round. If both players have the same difference, the round ends in a draw.

// Priyansh writes the number a
// , and Priyam writes the number b
// . Now, Ayush wants to determine the number of possible outcomes when the dice is thrown, considering all possible scenarios: Priyansh wins, the game ends in a draw, or Priyam wins.

// Input
// The single line contains two integers a
//  and b
//  (1≤a,b≤6
// ) — the numbers written by Priyansh and Priyam, respectively.

// Output
// Print three integers representing the number of outcomes where Priyansh wins, the game ends in a draw, and Priyam wins, respectively.

// Examples
// inputCopy
// 2 5
// outputCopy
// 3 0 3
// inputCopy
// 2 4
// outputCopy
// 2 1 3
// Note
// The dice is a standard six-sided cube with each side containing a number from 1 to 6, where all numbers are distinct.

// In this game, if number a
//  is closer to the number x
//  than number b
// , it means that |a−x|<|b−x|
// .

// For example 1,

// If the dice shows 1
// :
// Priyansh's difference from the dice: (|2−1|=1)
// Priyam's difference from the dice: (|5−1|=4)
// Priyansh wins because 1
//  is closer to 2
//  than 5
// .
// If the dice shows 2
// :
// Priyansh's difference from the dice: (|2−2|=0
// )
// Priyam's difference from the dice: (|5−2|=3
// )
// Priyansh wins because 2
//  is exactly his number.
// If the dice shows 3
// :
// Priyansh's difference from the dice: (|2−3|=1
// )
// Priyam's difference from the dice: (|5−3|=2
// )
// Priyansh wins because 3
//  is closer to 2
//  than 5
// .
// In the same way the result when the dice shows 4
// , 5
// , or 6
//  can be calculated.
#include<iostream>
#include<cmath>
using namespace std;
void dice_game_outcomes(int a, int b){
    int priyansh_wins =0;
    int priyam_wins = 0;
    int draws =0;

    for(int x=1; x <= 6; ++x){
        int diff_priyansh = abs(a-x);
        int diff_priyam = abs(b-x);

        if(diff_priyansh < diff_priyam){
            ++priyansh_wins;
        }
        else if(diff_priyansh > diff_priyam){
            ++priyam_wins;
        }
        else {
            ++draws;
        }
    }
    cout << priyansh_wins << " " << draws << " " << priyam_wins <<endl;
}
int main(){
    int a , b;
    cin >> a >> b;
    dice_game_outcomes(a , b);
    return 0;
}





