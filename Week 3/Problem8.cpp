#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

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

return 0;
}

