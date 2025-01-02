#include<iostream>
#include<string>
using namespace std;

int main() {
    string firstname = "Alice";
    string lastname = "Cooper";
    string name = firstname + ' ' + lastname;
    cout<<name.find("Coop")<<endl;// in the entire name will find the location where the first character "coop" of substring will be present.
    cout<<name.length()<<endl;// length function return the length.
    cout<<name.substr(2, 3)<<endl;// (will get 2nd character then take upto 3 character including 2nd character also).
    return 0;
}

/* Alice Cooper
index start from 0
length is start from 1

6
12
ice
*/



// try to write another stsing program
/*#include<iostream>
#include<string>
using namespace std;

int main(){
    const int a = 10;
    const int b = a + 1;
    a = a+1;// it throw compile time error;
    return 0;
}
*/

