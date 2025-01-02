#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);
 
void CoderSanskar()
{
    int x, y, k;
    cin >> x >> y >> k;
    if (k % 2)
    {
        cout << x << ' ' << y << '\n';
        k--;
    }
    for (int i = 1; i < k / 2 + 1; i++)
    {
        cout << x - i << ' ' << y - i << '\n';
        cout << x + i << ' ' << y + i << '\n';
    }
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
