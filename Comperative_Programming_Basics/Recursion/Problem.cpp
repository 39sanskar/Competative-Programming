#include<iostream>
using namespace std;
int f(int x){
    if(x == 0 || x == 1)// base case
      return x;
    if(x%3 != 0)
      return 0;// also a base case 
    else 
      return f(x/3);
}

/*Generalisation output according to question 
Returns 1 when n is a power of 3, otherwise 0.
*/