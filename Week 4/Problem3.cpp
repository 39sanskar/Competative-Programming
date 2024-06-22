// Problem Statement
// There is an ultramarathon course totaling 
// 100km. Water stations are set up every 
// 5km along the course, including the start and goal, for a total of 
// 21.

// Takahashi is at the 
// Nkm point of this course. Find the position of the nearest water station to him.

// Under the constraints of this problem, it can be proven that the nearest water station is uniquely determined.

// Constraints
// 0≤N≤100
// N is an integer.
// Input
// The input is given from Standard Input in the following format:

// N
// Output
// Print the distance between the start and the water station nearest to Takahashi, in kilometers, in a single line.

// Sample Input 1
// Copy
// 53
// Sample Output 1
// Copy
// 55
// Takahashi is at the 
// 53km point of the course. The water station at the 
// 55km point is 
// 2km away, and there is no closer water station. Therefore, you should print 
// 55.

// Sample Input 2
// Copy
// 21
// Sample Output 2
// Copy
// 20
// Takahashi could also go back the way.

// Sample Input 3
// Copy
// 100
// Sample Output 3
// Copy
// 100
// There are also water stations at the start and goal. Additionally, Takahashi may already be at a water station.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int val1 = n%5; //when looking backwards.
    int val2 = 5-(n%5); // when looking forwards.
    if (val1 > val2){
    cout << n + val2 << endl;// when the front one is closser.
    }
    
    else {
    cout << n-val1<<endl;// back one is closer.
    }


}













