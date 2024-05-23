// Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

// Input
// The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

// Output
// Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

// Examples
// inputCopy
// HoUse
// outputCopy
// house
// inputCopy
// ViP
// outputCopy
// VIP
// inputCopy
// maTRIx
// outputCopy
// matrix

#include<iostream>
using namespace std;
int main() {
    string s; cin >> s;
    
    int lowercase = 0, uppercase = 0;
    
    for (int i =0; i < s.size(); i++){
        if('a' <= s[i] && s[i] <= 'z')
            lowercase++;
        else 
            uppercase++;
    }
    
    if( lowercase < uppercase){
        for(int i = 0; i<s.size(); i++ )
           s[i] = toupper(s[i]);
           
        cout << s << endl;
        
    }else {
        for(int i = 0; i < s.size(); i++)
           s[i] = tolower(s[i]);
           
        cout << s << endl;   
    }
}
    