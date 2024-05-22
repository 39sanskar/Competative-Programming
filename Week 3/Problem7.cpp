#include <iostream>
using namespace std;

void print_Z(int n) {
    // Print the first row of asterisks
    for (int i = 0; i < n; i++) {
        cout << '*';
    }
    cout << endl;

    // Print the diagonal middle part
    for (int i = 1; i < n - 1; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << ' ';
        }
        // Print the asterisk
        cout << '*' << endl;
    }

    // Print the last row of asterisks
    for (int i = 0; i < n; i++) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    int n;
    
    cin >> n;

    if (n > 2 && n <= 20) {
        print_Z(n);
    } else {
        cout << "Invalid input. n must be greater than 2 and less than or equal to 20." << endl;
    }

    return 0;
}

