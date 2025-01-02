#include<iostream>
using namespace std;
int fun(int a = 10, int b = 20, int c=30){
    cout<<"a: "<<a<<", b: "<<b<<", c: "<<c<<endl;
    return a*b+c;
}
int main(){
    cout<<fun()<<endl;// if not passing any argument then it take default value.
    cout<<fun(4)<<endl;
    cout<<fun(4, 5)<<endl;
    cout<<fun(4, 5, 6)<<endl;
    return 0;

}
/*
//Output 
a: 10, b: 20, c: 30
230
a: 4, b: 20, c: 30 
110
a: 4, b: 5, c: 30  
50
a: 4, b: 5, c: 6   
26

*/