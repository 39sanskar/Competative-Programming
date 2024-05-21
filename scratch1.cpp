#include<iostream>
using namespace std;

// int main(){

//     int i =0;
//     while(i<10){ // while loop is only contain condition for the middle part that has the condition has STATEMENT- 2 // while loop is only contain condition for the middle part that has the condition has STATEMENT- 2
//         cout<<i<<endl;
//         i++;
//     }
    
// }

// for the do-while loop is always contain the STATEMENT- 1 and the condition has STATEMENT- 2
//and also need the semicolon at the end ;


// using for- each loop..


int main(){
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    cin >> a[i];
   // for-each loop i is not the index it is directly a value..
   for(int i: a)
   cout << i << endl;


}




