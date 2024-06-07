// Given two person names.
// Given two person names.

// Each person has {"the first name" + "the second name"}

// Determine whether they are brothers or not.

// Note: The two persons are brothers if they share the same second name.

// Input
// First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

// Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

// Output
// Print "ARE Brothers" if they are brothers otherwise print "NOT".

// Examples
// inputCopy
// bassam ramadan
// ahmed ramadan
// outputCopy
// ARE Brothers
// inputCopy
// ali salah
// ayman salah
// outputCopy
// ARE Brothers
// inputCopy
// ali kamel
// ali salah
// outputCopy
// NOT

#include<iostream>
using namespace std;
int main() {
    string f1 , s1 , f2 , s2;
    cin >> f1 >> s1 >> f2 >> s2;
    if( s1 == s2){
        cout << "ARE Brothers" << endl;
    }else{
        cout << "NOT" << endl;
    }
    return 0;
}
