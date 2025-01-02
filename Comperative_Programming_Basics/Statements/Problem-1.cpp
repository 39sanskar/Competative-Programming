/*
Take n as input from user and write a program which woks as follow.
if n is odd: evaluates and prints factorial value of n. 
if n is even: evaluates and prints sum of all the whole number upto n and including n.
*/
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    long long result;
    if(n%2==0){
        result = 0;
        for(int i =1; i<=n; i++ ){
            result = result + i;
        } 
        cout << result << endl;   
    }
    else{
        result = 1;// if the problem is expected with multiply  some number then not initialise with 0.
        int i =1;
        while(i != n+1){//Why n+1.
            result = result *i;// the factorial of a number is a product from 1 to n.
            i = i +1 ;
        }
        cout << result << endl;
    }
    return 0; 
}
// factorial of the number is going to the exponentially.thats why it take as a long long.
// try to think another way .






