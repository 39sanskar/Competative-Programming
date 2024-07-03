// B - Fill the Gaps  / 
// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 200 points

// Problem Statement
// We have a sequence of length 
// N consisting of positive integers: 
// A=(A 
// 1
// ​
//  ,…,A 
// N
// ​
//  ). Any two adjacent terms have different values.

// Let us insert some numbers into this sequence by the following procedure.

// If every pair of adjacent terms in 
// A has an absolute difference of 
// 1, terminate the procedure.
// Let 
// A 
// i
// ​
//  ,A 
// i+1
// ​
//   be the pair of adjacent terms nearest to the beginning of 
// A whose absolute difference is not 
// 1.
// If 
// A 
// i
// ​
//  <A 
// i+1
// ​
//  , insert 
// A 
// i
// ​
//  +1,A 
// i
// ​
//  +2,…,A 
// i+1
// ​
//  −1 between 
// A 
// i
// ​
//   and 
// A 
// i+1
// ​
//  .
// If 
// A 
// i
// ​
//  >A 
// i+1
// ​
//  , insert 
// A 
// i
// ​
//  −1,A 
// i
// ​
//  −2,…,A 
// i+1
// ​
//  +1 between 
// A 
// i
// ​
//   and 
// A 
// i+1
// ​
//  .
// Return to step 1.
// Print the sequence when the procedure ends.

// Constraints
// 2≤N≤100
// 1≤A 
// i
// ​
//  ≤100
// A 
// i
// ​
 
// 
// =A 
// i+1
// ​
 
// All values in the input are integers.
// Input
// The input is given from Standard Input in the following format:

// N
// A 
// 1
// ​
  
// A 
// 2
// ​
  
// … 
// A 
// N
// ​
 
// Output
// Print the terms in the sequence when the procedure ends, separated by spaces.

// Sample Input 1
// Copy
// 4
// 2 5 1 2
// Sample Output 1
// Copy
// 2 3 4 5 4 3 2 1 2
// The initial sequence is 
// (2,5,1,2). The procedure goes as follows.

// Insert 
// 3,4 between the first term 
// 2 and the second term 
// 5, making the sequence 
// (2,3,4,5,1,2).
// Insert 
// 4,3,2 between the fourth term 
// 5 and the fifth term 
// 1, making the sequence 
// (2,3,4,5,4,3,2,1,2).
// Sample Input 2
// Copy
// 6
// 3 4 5 6 5 4
// Sample Output 2
// Copy
// 3 4 5 6 5 4
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
        if(arr[i]>arr[i+1]){
            int temp=arr[i]-1;
            while(temp>arr[i+1]){
                cout <<temp<<" ";
                temp--;
            }
        }
        else{
            int temp=arr[i]+1;
            while(temp < arr[i+1]){
                cout<<temp<<" ";
                temp++;
            }
        }
    }
    return 0;
}

//Another way to solce the Problem
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    for (int i = 1; i < a.size(); i++) {
        if (a[i-1]+1 < a[i]) a.insert(a.begin()+i, a[i-1]+1);
        if (a[i-1]-1 > a[i]) a.insert(a.begin()+i, a[i-1]-1);
    }
    for (auto x : a) cout << x << ' ';
}












