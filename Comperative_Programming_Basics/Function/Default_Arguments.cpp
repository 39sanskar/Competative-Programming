/*
#include<iostream>
using namespace std;
int fun(int a, int b){
    return a*b;
}
int main(){
    int a , b;
    cin>>a>>b;
    cout<<fun(a, b)<<endl;
    return 0;
}
*/
// Output for a = 3 , b = 4;

/*
#include<iostream>
using namespace std;
int fun(int a, int b){
    return a*b;
}
int main(){
    int a , b;
    cin>>a>>b;
    cout<<fun(b)<<endl;
    return 0;
}

Output: no matching function for call to 'fun'(Compile time error)
*/    

/*
// Now using default argument.
#include<iostream>
using namespace std;
int fun(int a = 10, int b){
    return a*b;
}
int main(){
    int a , b;
    cin>>a>>b;
    cout<<fun(b)<<endl;
    return 0;
}

Output : error-1: missing default argument on parameter 'b'.
error-2: no matching function for call to 'fun' (2 compile time error.)
/* Their are rule in default argument that is you can not use 
int fun(int a = 10, int b)  this type of default argument.
Only default argument is in the last place.
int fun (int a, int b = 10)
*/
/*
// Function for default argument
#include <iostream>
using namespace std;
int fun(int a, int b=10){
    return a*b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<fun(a)<<endl;
    return 0;
}
//Output is 30 
// if we send the value of b in the function then that value is overlap the value of b.
*/

/*
#include <iostream>
using namespace std;
int fun(int a, int b=10){
    return a*b;
}
int main(){
    int a;
    cin>>a;
    cout<<fun(a , a+20)<<endl;
    return 0;
}

//Output for a = 3; that is 69.

*/
/*
#include<iostream>
using namespace std;
int fun(int a, int b = 10, int c){
    return a*b+c;
}
int main(){
    int a;
    cin>>a;
    cout<<fun(a, a+20)<<endl;
    return 0;
}
// Output: it has two compile time error 
1. missing default argument on parameter.
2. no matching function for call to 'fun'
*/

/*
#include<iostream>
using namespace std;
int fun(int a, int c, int b = 10){
    return a*b+c;
}
int main(){
    int a;
    cin>>a;
    cout<<fun(a, a+20)<<endl;
    return 0;
}
//Output for a = 3 ; 53

*/
