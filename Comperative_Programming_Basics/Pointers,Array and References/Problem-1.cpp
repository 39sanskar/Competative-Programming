/*
Write a C++ code for finding the second largest element in the array.
*/
#include<iostream>
#include<climits>  // For INT_MIN
using namespace std;

int findSecondLargest(int* arr, int size) {
    if (size < 2) {
        cout << "Array should have at least two elements." << endl;
        return INT_MIN;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    // Loop through the array to find the largest and second largest
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
        return INT_MIN;
    }
    
    return secondLargest;
}

int main() {
    int arr1[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    int secondLargest = findSecondLargest(arr1, size);

    if (secondLargest != INT_MIN) {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}

/*
>>What does the following declaration means?
int *ptr[10]; // if you dont have (*ptr) here then int *ptr[10] has * is count 
as in thr (int*);
Output: ptr is a array of pointers to 10 integers.
*/

/*
>>What does the following declaration means?
int (*ptr)[10];
Output: ptr is a pointer to an array of 10 integers.
*/