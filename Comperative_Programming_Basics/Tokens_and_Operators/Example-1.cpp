#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 4;

    b += a -= 6;// a = a-6; // b= a+b;

    cout <<"a = " << a << endl;
    cout <<"b = " << b;
}
// Output is a =(-5) , b =(-1)
/*
in the compound assignment by sum and differences. has same preference then we check
associativity then its associativity is (+= -=) Right to Left.
then (b += (a -= 6))
*/
