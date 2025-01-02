#include<iostream>
using namespace std;
int main (){
    int *p, a;// * it is not work for both it work for first.p is a integer pointer and a is type int
    cin>>a;
    p = &a;//address allocation
    //p = a; (erroe: assigning to 'int *' )
    // from incompatible type 'int')
    cout<<a<<endl;
    *p += 20;// dereferencing the pointer p (that is *p)increment by 20
    cout<<a<<endl;
    return 0;
}