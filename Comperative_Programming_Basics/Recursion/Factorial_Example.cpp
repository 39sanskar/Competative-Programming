//This is a recursive approach.
/*
#include<iostream>
using namespace std;
int main(){
    int n, i;
    long result;
    cin >> n;
    result = n;
    for(i = n-1; i>0; i--)// using decreasing method.
       result = result * i;
    cout << n << "! = " << result;
    return 0;
}
*/

// Using Recursive approach 
#include<iostream>
using namespace std;

long  factorial(int n){
    if(n == 0)
       return 1;
    else
       return n * factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    long result = factorial(n);
    cout<< n << "! = " << result;
    return 0;
}
