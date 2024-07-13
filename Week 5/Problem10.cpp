// E. Mirror Grid
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given a square grid with n
//  rows and n
//  columns. Each cell contains either 0
//  or 1
// .

// In an operation, you can select a cell of the grid and flip it (from 0→1
//  or 1→0
// ). Find the minimum number of operations you need to obtain a square that remains the same when rotated 0∘
// , 90∘
// , 180∘
//  and 270∘
// .

// The picture below shows an example of all rotations of a grid.


// Input
// The first line contains a single integer t
//  (1≤t≤100
// ) — the number of test cases.

// The first line of each test case contains a single integer n
//  (1≤n≤100
// ) — the size of the grid.

// Then n
//  lines follow, each with n
//  characters ai,j
//  (0≤ai,j≤1
// ) — the number written in each cell.

// Output
// For each test case output a single integer  — the minimum number of operations needed to make the square look the same rotated 0∘
// , 90∘
// , 180∘
//  and 270∘
// .

// Example
// inputCopy
// 5
// 3
// 010
// 110
// 010
// 1
// 0
// 5
// 11100
// 11011
// 01011
// 10011
// 11000
// 5
// 01000
// 10101
// 01010
// 00010
// 01001
// 5
// 11001
// 00000
// 11111
// 10110
// 01111
// outputCopy
// 1
// 0
// 9
// 7
// 6
// Note
// In the first test case, we can perform one operations to make the grid 010111010
// . Now, all rotations of the square are the same.

// In the second test case, all rotations of the square are already the same, so we don't need any flips.
#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define IOtext freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define foreach(i, j, k, in) for(int i=j;i<k;i+=in)
#define rforeach(i, j, k, in) for(int i=j;i>=k;i-=in)
#define rep(i,j) foreach(i,0,j,1)
#define rrep(i,j) rforeach(i,j,0,1)
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define sz(s) (int)(s.size())
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) int x; cin>>x;
#define inll(x) long long int x; cin>>x;
#define instr(x) string x; cin>>x;
#define all(x) x.begin(), x.end()
#define os(x) cout << x << " ";
#define out(x) cout << x << endl;
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define COUNT(x,u) count(all(x), u)
#define B break
#define C continue
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define pm cout<<"-1"<<endl
#define ps(x,y) fixed<<setprecision(y)<<x

//Typedef
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int,int> mii;
typedef set<int> st;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

// Operator overloads
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
template<typename T, typename V> // cout << map<T,T>
ostream& operator<<(ostream &ostream, const map<T,V> &c) { for (auto &it : c) cout << it.first << " " << it.second<<endl; return ostream; }

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

//Constants
vector <ll> primes;
vector <bool> is_prime;

// Mathematical functions
void Sieve(int n){ is_prime.assign(n + 1, true); is_prime[0] = is_prime[1] = false; for(ll i = 2; i * i <= n; i++) if(is_prime[i]) for(ll j = i * i; j <= n; j += i) is_prime[j] = false;}
void get_primes(int n){ for(int i = 2; i <= n; i++)  if(is_prime[i])  primes.push_back(i); }
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
ll modinv(ll p,ll q){ll ex;ex=M-2;while (ex) {if (ex & 1) {p = (p * q) % M;}q = (q * q) % M;ex>>= 1;}return p;}

void solve()
{
    int n;
    cin>>n;
    int a[n][n];
    rep(i,n)
    {
        string s;
        cin>>s;
        rep(j,n)
        {
            if(s[j]=='1') a[i][j]=1;
            else a[i][j]=0;
        }
    }
    map<pair<int,int>,int> m;
    rep(i,n) rep(j,n) m[{i,j}]+=a[i][j];
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
    rep(i,n) rep(j,n) m[{i,j}]+=a[i][j];
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
    rep(i,n) rep(j,n) m[{i,j}]+=a[i][j];
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
    rep(i,n) rep(j,n) m[{i,j}]+=a[i][j];
    int c = 0;
    int start = 0;
    int end = 0;
    for(int i=0;i<(n+1)/2;i++)
    {
        for(int j=start;j<n-end;j++) c+=min(m[{i,j}],4-m[{i,j}]);
        c-=min(m[{i,n-end-1}],4-m[{i,n-end-1}]);
        start++;
        end++;
    }
    out(c);  
}


int32_t main()
{
    fastio()
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif
    //Rating? Neh. In love with experience.
    //Code Karlo, Coz KHNH :)
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}
