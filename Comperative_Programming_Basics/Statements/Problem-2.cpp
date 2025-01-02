/*
Take n as input from user and write a program to evaluate and print 
sum of all the digits present in n.
*/
// if we do n%10 it always return the last digit of n.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result = 0, temp;// temp =n , store the value if n in temp variable.
    temp = n; // why temp, why not equal to n!
    while(temp!=0){
        result += temp%10;
        temp = temp/10;
    }
    cout << result <<endl;
}






