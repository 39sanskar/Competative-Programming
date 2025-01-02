/*
Write a function to check if a string is a 
palindrome or not.
palindrome - a string which is same as its reverse or start .
*/

#include<iostream>
using namespace std;
string is_palindrome(string s){
    string ans = "";
    int l = s.length();
    int i = 0;
    while(i<l-i-1){
        /* you have to check zeroth character to last character of the string.
        if it is zeroth  index of the string s[i], then the last character of the string is (l-i-1)th character.
        here l is the length of the string which is stat from 1. and index is start from 0.
        */
        if(s[i]!=s[l-i-1]) return "NO";
        i++;// increase the index
    }
    return "YES";

}
int main(){
    string str;
    cin>>str;
    cout<<is_palindrome(str)<<endl;
}










