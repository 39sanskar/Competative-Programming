/*
Write a function to find number of vowels in a string.
*/
#include<iostream>
using namespace std;
int count_st(string s){
    int i = 0, ans = 0;
    while(s[i]!='\0'){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'|| s[i]=='u')
            ans++;
        i++;// increase i in each iteration until we get null character.
        
        
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    cout<<count_st(str)<<endl;
    return 0;
}






/*
in C++ in string every string which you are declaring or taking input
from the user every string is end with a null character.
find the end of the string using this s[i]!='\0'.
you can also use the length method.
*/






