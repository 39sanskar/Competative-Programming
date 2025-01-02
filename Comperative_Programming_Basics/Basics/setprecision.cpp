#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    double pi = 3.141592;
    
    cout << pi << endl;                   // Default precision
    cout << setprecision(4) << pi << '\n';  // 4 significant digits
    cout << setprecision(10) << pi << '\n'; // 10 significant digits
    
    cout << fixed;                          // Now fixed-point notation
    cout << setprecision(4) << pi << '\n';  // 4 digits after the decimal point
    cout << setprecision(10) << pi << '\n'; // 10 digits after the decimal point
    
    return 0;
}
/*
//setprecision(4): This sets the total number of significant digits to 4 (before applying fixed).
//fixed: After this is applied, setprecision controls the number of decimal places rather than the total number of significant digits.
*/

/*
Output:
3.14159
3.142
3.141592
3.1416
3.1415920000
*/