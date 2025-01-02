#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 22, c=2, x;

    x = a == b !=c;
    cout<<"The result of the first expression is = "<<x<<endl;

    x = a == (b != c);
    cout << "The result of the second expression is = "<<x<<endl;

    return 0;
}
/*
Output: The result of the first expression is = 1
The result of the second expression is = 0
*/