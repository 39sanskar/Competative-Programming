#include<iostream>
#include<cmath>
using namespace std;
void dice_game_outcomes(int a, int b){
    int priyansh_wins =0;
    int priyam_wins = 0;
    int draws =0;
 
    for(int x=1; x <= 6; ++x){
        int diff_priyansh = abs(a-x);
        int diff_priyam = abs(b-x);
 
        if(diff_priyansh < diff_priyam){
            ++priyansh_wins;
        }
        else if(diff_priyansh > diff_priyam){
            ++priyam_wins;
        }
        else {
            ++draws;
        }
    }
    cout << priyansh_wins << " " << draws << " " << priyam_wins <<endl;
}
int main(){
    int a , b;
    cin >> a >> b;
    dice_game_outcomes(a , b);
    return 0;
}
 
 
 