// Problem Statement
// AtCoder Beginner Contest usually starts at 21:00 JST and lasts for 
// 100 minutes.

// You are given an integer 
// K between 
// 0 and 
// 100 (inclusive). Print the time 
// K minutes after 21:00 in the HH:MM format, where HH denotes the hour on the 
// 24-hour clock and MM denotes the minute. If the hour or the minute has just one digit, append a 
// 0 to the beginning to represent it as a 
// 2-digit integer.

// Constraints
// K is an integer between 
// 0 and 
// 100 (inclusive).
// Input
// Input is given from Standard Input in the following format:

// K
// Output
// Print the time 
// K minutes after 21:00 in the format specified in the Problem Statement.

// Sample Input 1
// Copy
// 63
// Sample Output 1
// Copy
// 22:03
// 63 minutes after 21:00, it will be 22:03, so 22:03 should be printed.

// The following outputs would be judged incorrect:

// 10:03
// 22:3
// Sample Input 2
// Copy
// 45
// Sample Output 2
// Copy
// 21:45
// Sample Input 3
// Copy
// 100
// Sample Output 3
// Copy
// 22:40
#include<iostream>
using namespace std;
int main(){
    int k;//K is the minute.
    cin >> k;
    int hour=21;
    if(k>=60){
        hour=22;
        //k-=60
        k=k-60;
    }
    cout<<hour<<":";
    if(k<10){
        cout<<0<<k<<endl;
    }
    else
       cout<<k<<endl;

}

