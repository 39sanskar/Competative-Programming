#include<iostream>
using namespace std;
int main(){
    int arr[] = {11, 21, 31, 41, 51, 71, 91};
    int *ptr1 = arr;// ptr1 points to first element of the array.
    int *ptr2 = arr + 6; // ptr2 points to seventh element of the array
    // Number of elements between ptr1 and ptr2
    cout<<(ptr2 - ptr1)<<endl;// but it return 6 because of integer.(refer pointer arithmetic)
    // Number of bytes between ptr1 and ptr2
    cout<<(char*)ptr2 - (char*)ptr1 << endl;// 24 (it depend on compiler to compiler and size of integer is 4bytes.)
    return 0;
}