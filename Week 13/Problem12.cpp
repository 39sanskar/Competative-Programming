#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);
 
 
void CoderAman()
{
    int n;
    cin >> n;
    cout << n % 10 + n / 10 << '\n';
    // int sum = 0;
    // while (n)
    // {
    //     sum += n % 10;
    //     n /= 10;
    // }
    // cout << sum << '\n';
}
 
int32_t main()
{
    fastIO;
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        CoderAman();
    }
    return 0;
}
