// It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

// Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

// Input
// The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

// Output
// Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

// Examples
// inputCopy
// 1987
// outputCopy
// 2013
// inputCopy
// 2013
// outputCopy
// 2014
#include<iostream>
using namespace std;
int main(){
    int y ;
    cin >> y;
    for( int i=y+1; i<10000; i++){
        int freq[10];// stores the frequency of every digit in the i.
        for (int j =0; j<10; j++){
            freq[j] = 0;


        }
        // memset(freq,0,sizeof(freq))
        int year=i;
        while(year>0){
            int digit = year%10;
            freq[digit]++;
            // year/=10;
            year = year/10;
        }
        int flag = 0;// indicates that if any occured more than 1 time.
        for(int i=0; i<10; i++){
            if(freq[i]>1){
                flag=1;
                break;

            }
