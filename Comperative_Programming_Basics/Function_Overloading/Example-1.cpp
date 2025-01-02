#include<iostream>
using namespace std;
//function 1
int fun_overl(int a){
    cout<<"I am only integer"<<endl;
    return 2*a;
}
char fun_overl(int a){
    cout<<"I am only character"<<endl;
    return a+2;
}
//error: functions that differ only in their return type cannot 
/*
Can not overload function like this because function name is same and the type of argument 
is also same but only the return type is different . this is not allowed.

if function name is different it is not a function overloading.

if function overloading then the function name is same and either the no. of argument is should be differ 
Or the data type should differ.
*/