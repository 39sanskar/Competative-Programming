/*
>>Displaying the array in reverse direction

*/
#include<iostream>
using namespace std;

void rev(int* arr, int size) {  // Changed return type to void
    for(int i = size-1; i >= 0; i--)
        cout << arr[i] << " ";  // Added missing semicolon
}

int main() {
    int arr1[5] = {10, 20, 30, 40, 50};
    rev(arr1, 5);
    return 0;
}

// Output is 50 40 30 20 10
