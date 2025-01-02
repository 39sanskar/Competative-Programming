#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
#define fr(i,n) for (ll i=0;i<n;i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
typedef tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
// #define mod (ll)(1e9+7)
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#pragma GCC optimize("unroll-loops,O3,Ofast") //even 10^8+ also works with this
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")
 
int knightx[8]={-1,-2,-2,-1,1,2,2,1};
int knighty[8]={-2,-1,1,2,2,1,-1,-2};
 
//...............................................................................................................................................
 
// lambda dfs------------->
// function<int(int,int)> dfs = [&](int node,int par){
 
// };
// dfs(0,-1);
// ---------------------------------------------------------------------------------------
// //__builtin_popcount(a) number of set bits for int
// //__builtin_popcountll(a) number of set bits for long long
// //<<left shift *2
// //>>Right shift /2
// //char a='A'|(1<<5); in uppercase 5th bit is not set and in lower case 5th bit is set
// //char a='A'|' ';
// //char A='a'&(~(1<<5)); unset the 5th bit
// //char A='a'& '_';
// //if(n&(n-1)==0) then number is power of two
//..................................................................................................
 
 
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    int cnt1=0;
    for(auto it:v)if(it&1)cnt1++;
    if(cnt1==0 || cnt1==n){
        cout<<0<<endl;
        return;
    }
    vector<int>v1,v2;
    for(auto it:v){
        if(it&1)v1.push_back(it);
        else v2.push_back(it);
    }
    sort(all(v2));
    sort(all(v1));
    ll temp=v1.back();
    ll ans=0;
 
    for(auto it:v2){
        if(temp<it){
            ans+=2;
            temp=(it*2)+temp;
        }
        else{
            ans++;
            temp=it+temp;
        }
    }
    ll ans1=0;
    reverse(all(v2));
    temp=v1.back();
    for(auto it:v2){
        if(temp<it){
            ans1+=2;
            temp=(it*2)+temp;
        }
        else{
            ans1++;
            temp=it+temp;
        }
    }
    cout<<min(ans,ans1)<<endl;
}
 
int main(){
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
    
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
} 
