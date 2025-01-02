#include<iostream>
using namespace std;
int main(){
    char input;
    cin>>input;
    switch(input){
        case 'a':
            cout<<"I am a"<<endl;
        break;
        case 'b':
            cout<<"I am b"<<endl;
        break;
        case 'c':
            cout<<"I am z"<<endl;
        break;
        default:
            cout<<"I have no name:"<<endl;

    }
    return 0;
}

/*
Input>>c
Output<<I am z
*/