#include<iostream>
using namespace std;

namespace xyz{ // it is just a container.
    string greeting  = "hello";
    int number = 42;

}

// namespaces are quite useless for cp

int main() {
    cout << xyz::greeting << endl;
}
// OOps does not apply the namespace 
// namespace is  just a collection of theese value
// so basically the :: for the global scope what it did  was it access the global it took the global scope..
// and it took the variables of the global scope

// Another method to execute the program..
using namespace xyz;
int main() {
    cout << xyz::greeting << endl;
}

// in Competative Prigramming if you write #include<bits/stdc+++.h> 
// then everything will be included like that map,vector, string, etc..


// clang for which there is no header file.













