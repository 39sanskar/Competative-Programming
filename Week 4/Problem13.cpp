// B. Harmonic Resonance Value
// time limit per test2 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Tushar is a young scientist working on a secret project in the futuristic city of Neo Zenith. He's developing a revolutionary energy synchronizer that requires two power crystals to function. The synchronizer works based on a special property called the Harmonic Resonance Value (HRV) of the two crystals.

// The HRV of two crystals with energy levels x
//  and y
//  is defined as the smallest energy level that is a multiple of both x
//  and y
// . For example, HRV(13,37)=481
//  and HRV(9,6)=18
// .

// For each experiment, Tushar is given a range of acceptable energy levels, from l
//  to r
// . He needs to find two crystals with energy levels x
//  and y
//  that satisfy these conditions:

// 1. Both crystal energy levels are within the given range: l≤x<y≤r
// 2. The HRV of the two crystals is also within the range: l≤HRV(x,y)≤r
// Can you help Tushar determine if it's possible to find such crystals for each experiment, and if so, what their energy levels should be?

// Input
// The first line contains one integer t
//  (1≤t≤10000
// ) — the number of experiments Tushar wants to conduct.

// For each experiment: One line containing two integers l
//  and r
//  (1≤l<r≤109
// ) — the lower and upper limits of the acceptable energy range.

// Output
// For each experiment, print two integers:

// If it's impossible to find two crystals meeting all the conditions, print two integers equal to −1
// ;
// Otherwise, print the energy levels x
//  and y
//  of the two crystals (if there are multiple valid answers, you may print any of them).
// Example
// inputCopy
// 4
// 1 1337
// 13 69
// 2 4
// 88 89
// outputCopy
// 6 7
// 14 21
// 2 4
// -1 -1
#include<iostream>
using namespace std;
void solve(){
    int t;
    cin >>t;
    for(int i =0; i<t; ++i){
        int l,r;
        cin >>l >>r;

        if(2*l <= r){
            cout << l <<" " << 2*l << endl;

        }
        else{
            cout <<" -1 -1" << endl;
        }
    }
}

int main(){
    solve();
    return 0;
}











