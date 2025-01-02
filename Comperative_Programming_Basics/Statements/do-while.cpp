/*do-while loop - the written inside the do loop run atleast once and then 
condition will be check
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    do{
        cout<<i<<endl;
        i = i+1;
    } while(i<=n);
}
/*
given n=0; and then do loop execute once that is printing 1.
*/