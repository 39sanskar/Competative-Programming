#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);
 
 
void CoderSanskar()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
 
    int ans = 0;
    if ((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2))
    {
        ans += 2;
    }
    if ((a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1))
    {
        ans += 2;
    }
    cout << ans << '\n';
}
 
int32_t main()
{
    fastIO;
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        CoderSanskar();
    }
    return 0;
}
