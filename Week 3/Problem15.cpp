// Geek is very fond of patterns. Once, his teacher gave him a star pattern to solve. He gave Geek an integer n and asked him to build a pattern.

// Help Geek to build a star pattern.(That has diamond pattern).

//{ Driver Code Starts

#include <iostream>
using namespace std;

class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i=0; i < n; i++){
            for(int j = 0; j < n-i-1; j++)
               cout << " ";
            for(int j=0; j < i+1; j++)  
               cout << "* ";
           
            cout << endl;  
        }
        for(int i=n-1; i >= 0; i--){
            for(int j = 0; j < n-i-1; j++)
               cout << " ";
            for(int j=0; j < i+1; j++)  
               cout << "* ";
           
            cout << endl;
        }    

    }    

};



