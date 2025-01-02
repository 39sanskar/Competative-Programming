#include<iostream>
using namespace std;
int main(){
    char input;
    cin>>input;
    switch(input){
        case 'a':
            cout<<"I am a"<<endl;
        
        case 'b':
            cout<<"I am b"<<endl;

        case 'c':
            cout<<"I am z"<<endl;

        default:
            cout<<"I have no name:"<<endl;

    }
    return 0;
}

/*
input == 'b'
then Output is
I am b
I am z
I have no name:
(if want to this is not happen then apply switch case also.)
*/