// this is a important problem.
#include<iostream>
using namespace std;

void f(int x) {
    if (x > 0) {
        f(--x); // Decrement before calling recursively
        cout << x << " "; // Print the current value of x
        f(--x); // Decrement again and call recursively
    }
}

int main() {
    f(5); // Call the function with argument 5
    return 0;
}

/*
f(1)=>0
f(2)=>01
f(3)=>0120
*/