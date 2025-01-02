#include<iostream>
using namespace std;

int myGlobalNum; //Global Integer Variable.(is defined globally it can be accesed in the entire program.)

int main(){
    int myNum; // Integer (whole Number).
    float myFloatNum = 4.9; // Floating point number.
    double myDoubleNum = 3.9;// Floating point number.
    char myLetter = 'J'; // Character
    bool myBoolean = true; //Boolean
    string myText = "Hello";
    cout << " Default value of myNum is: "<<myNum<<endl;
    cout << "Default value of myGlobalNum is: "<<myGlobalNum<<endl;
    return 0;
}

/*
to be very careful if using local variable you keep getting wrong answer 
at the end you see that you will never initialise it.
*/