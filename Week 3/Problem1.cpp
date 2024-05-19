// Given N numbers. Count how many of these values are even, odd, positive and negative.

// Input
// First line contains one number N (1 ≤ N ≤ 103) number of values.

// Second line contains N numbers (-105 ≤ Xi ≤ 105).

// Output
// Print four lines with the following format:

// First Line: "Even: X", where X is the number of even numbers in the given input.

// Second Line: "Odd: X", where X is the number of odd numbers in the given input.

// Third Line: "Positive: X", where X is the number of positive numbers in the given input.

// Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

// Example
// inputCopy
// 5
// -5 0 -3 -4 12
// outputCopy
// Even: 3
// Odd: 2
// Positive: 1
// Negative: 3
// Note
// First Example :

// Even Numbers are : 0, -4 , 12

// Odd Numbers are : -5 , -3

// Positive Numbers are : 12

// Negative Numbers are : -5 , -3 , -4

#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int a[x];
    for(int i = 0 ; i < x ; i++){
        cin >> a[i];
    }
    int even = 0 , odd = 0 , positive = 0 , negative = 0;
    for(int i = 0 ; i < x ; i++){
        if(a[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
        if(a[i] > 0){
            positive++;
        }else if(a[i] < 0){
            negative++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}


