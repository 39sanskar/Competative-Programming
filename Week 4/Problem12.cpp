#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
        if(arr[i]>arr[i+1]){
            int temp=arr[i]-1;
            while(temp>arr[i+1]){
                cout <<temp<<" ";
                temp--;
            }
        }
        else{
            int temp=arr[i]+1;
            while(temp < arr[i+1]){
                cout<<temp<<" ";
                temp++;
            }
        }
    }
    return 0;
}

//Another way to solce the Problem
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    for (int i = 1; i < a.size(); i++) {
        if (a[i-1]+1 < a[i]) a.insert(a.begin()+i, a[i-1]+1);
        if (a[i-1]-1 > a[i]) a.insert(a.begin()+i, a[i-1]-1);
    }
    for (auto x : a) cout << x << ' ';
}
