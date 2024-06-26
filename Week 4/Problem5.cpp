// Z. Three Numbers
// time limit per test3 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given two numbers K
//  and S
// . Determine how many different values of X,Y
//  and Z
//  such that (0≤X,Y,Z≤K)
//  and X+Y+Z=S
// .

// Input
// Only one line containing two numbers K
//  and S
//  (0≤K≤3000,0≤S≤3K)
// .

// Output
// Print the answer required above.

// Examples
// inputCopy
// 2 1
// outputCopy
// 3
// inputCopy
// 9 4
// outputCopy
// 15
// Note
// In the first test case all values of X,Y,Z
//  that satisfy the conditions are :

// 0 0 1

// 0 1 0

// 1 0 0

// In the second test case all values of X,Y,Z
//  that satisfy the conditions are :

// Solution of the problem.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k , s;
    cin >> k >> s;

    int cnt=0;

    for(int x=0; x<=k; x++)
    {
        for(int y=0; y<=k; y++)
        {    
            int z= s - x - y;
            if(z >=0 && z <=k)
            {
                cnt++;
            }
            // x + y + z=s
            // z = s-x-y;
        
            // for(int z=0; z<=k; z++)
            // {
            //     if(x + y + z ==s)
            //     {
            //         cnt++ // cnt = cnt+1;
            //     }
            // }
        }

    }
    cout << cnt << endl;
    return 0;
}
// This is the solution of the Problem




