#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    
    while (n % 2 == 0){
        n /= 2 ;
        
    }
    // now n will be odd number
    if(n != 1)cout<<"YES"<<endl;
    else cout << "NO" << endl;
    
}

void io(){

#ifndef ONLINE_JUDGE
    freopen("in.txt" ,"r",stdin);
    freopen("out.txt" , "w" ,stdout);
    freopen("err.txt","w" , stderr);
#endif

}   
   


int main() {
    io();
    int t;
    cin >> t;
    for(int i = 1 ; i <= t; i++) solve();
    return 0;
}
