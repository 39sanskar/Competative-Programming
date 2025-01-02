#include<iostream>
using namespace std;
//function 1
int fun_overl(int a){
    cout<<"I am only integer"<<endl;
    return 2*a;
}

//function 2
char fun_overl(char a){
    cout<<"I am only character"<<endl;
    return a+2;
}

//function 3
bool fun_overl(double a, bool b){
    cout<<"I am pair (double, bool)"<<endl;
    return 2*a + b;
}

//function 4
int fun_overl(bool a, long long d){
    cout<<"I am pair(bool , long long)"<<endl;
    return 2*a;
}

//function 5
int fun_overl(string a){
    cout<<"I am only string"<<endl;
    cout<<a.length()<<endl;
    return 2*(a.length());

}

//function 6
int fun_overl(long long a, bool b){
    cout<<"I am pair (long long , bool)"<<endl;
    return 2*a;
}

int main(){
    int a;
    char b;
    double c;
    bool d;
    long long e;
    string s;
    cin>> a >> b >> c >> d >>e;
    cin>>s;
    // 12 a 2.13 1 3456 hello_world
    cout<<fun_overl(a)<<endl;
    cout<<fun_overl(b)<<endl;
    cout<<fun_overl(c,d)<<endl;
    cout<<fun_overl(d, e)<<endl;
    cout<<fun_overl(s)<<endl;
    cout<<fun_overl(e, d)<<endl;

}


