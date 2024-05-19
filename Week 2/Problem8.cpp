// One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
//  numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
// ) between the other three numbers; so that each operator is used only once.

// a□b□c=d
// Can you solve this tricky puzzle for him?
// Input
// Only one line containing four numbers a
// , b
// , c
//  and d
//  (−109≤a,b,c≤109
// ),(−1018≤d≤1018
// ).

// Output
// Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

// Examples
// inputCopy
// 3 4 5 23
// outputCopy
// YES
// inputCopy
// 9 5 3 7
// outputCopy
// YES
// inputCopy
// 1 2 3 1
// outputCopy
// NO

#include<iostream>
using namespace std;
int main(){
    long long a , b , c , d;
    //take input of these values
    // 3 + 4 -5 
    // 3 + 4 * 5
    // 3 - 4 + 5
    // 3 - 4 * 5
    // 3 * 4 + 5
    // 3 * 4 - 5
    // C++ Already Consider as a BODMAS Operaror
    cin >> a >> b >> c >> d;
    if(a + b - c == d || a + b * c == d || a - b + c == d || a - b * c == d || a * b + c == d || a * b - c == d){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
// Another way of solution 
#include<iostream>
using namespace std;
int main(){
long long a , b , c , d;
cin >> a >> b >> c >> d;

string output = "NO";

if (a + b * c == d)output = "YES";
if (a + b - c == d)output = "YES";
if (a - b + c == d)output = "YES";
if (a - b * c == d)output = "YES";
if (a * b - c == d)output = "YES";
if (a * b + c == d)output = "YES";
cout << output << endl;
return 0;
}
