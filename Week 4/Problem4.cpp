// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 100 points

// Problem Statement
// We have five cards with integers 
// A, 
// B, 
// C, 
// D, and 
// E written on them, one on each card.

// This set of five cards is called a Full house if and only if the following condition is satisfied:

// the set has three cards with a same number written on them, and two cards with another same number written on them.
// Determine whether the set is a Full house.

// Constraints
// 1≤A,B,C,D,E≤13
// Not all of 
// A, 
// B, 
// C, 
// D, and 
// E are the same.
// All values in input are integers.
// Input
// Input is given from Standard Input in the following format:

// A 
// B 
// C 
// D 
// E
// Output
// If the set is a Full house, print Yes; otherwise, print No.

// Sample Input 1
// Copy
// 1 2 1 2 1
// Sample Output 1
// Copy
// Yes
// The set has three cards with 
// 1 written on them and two cards with 
// 2 written on them, so it is a Full house.

// Sample Input 2
// Copy
// 12 12 11 1 2
// Sample Output 2
// Copy
// No
// The condition is not satisfied.

// This is the solution.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[14]; // frequenvy Array
//     for(int i=0; i<14; i++){
//         arr[i]=0;
//     }
//     // arr[i]---> Number of times i occured in the integer set.
//     for(int i=0; i<5; i++){
//         int n;
//         cin >> n;
//         arr[n]++;// increase its value with 1.

//         bool cnt1=0, cnt2=0;

//         // cnt1 ---->frequency 2 was occured or not.
//         // cnt2 ----> frequency 3 was occured or not.
//         for(int i=0; i<14; i++){
//             if(arr[i]==2){
//                 cnt1=1;
//             }
//             if(arr[i]==3){
//                 cnt2=1;
//             }
//         }    
//         if(cnt1==1 && cnt2==1){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout <<"No" << endl;
//         }
//     }
// }

//Another way of solution.
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> card(5);
  for (int i = 0; i < 5; i++) {
     cin >> card.at(i);
  }
  sort(card.begin(), card.end());
  
  int count = 0;
  bool two = false;
  bool three = false;
  for (int i = 0; i < 5; i++) {
    if (card.at(0) == card.at(i)) count++;
    if (count == 2) two = true;
    if (count == 3) {
      two = false;
      three = true;
      break;
    }
  }

  count = 0;
  for (int i = 4; i >= 0; i--) {
    if (card.at(0) != card.at(4) && card.at(4) == card.at(i)) {
      count++;
    }
    if (three && count == 2) {
      two = true;
      break;
    }
    if (two && count == 3) {
      three = true;
      break;
    }
  }

  if (two && three) cout << "Yes" << endl;
  else cout << "No" << endl;
}
