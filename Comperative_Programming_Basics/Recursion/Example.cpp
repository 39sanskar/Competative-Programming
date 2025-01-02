#include<iostream>
using namespace std;
int f(int x, int y){
    if(x == 0)//base case 
       return y;
    else
       return f(x-1, x+y);// logic is here// recursive case 
}
int main(){
    
    cout<<"ans = "<<f(10, 20)<<endl;
}
//Output is for f(10, 20): 75

