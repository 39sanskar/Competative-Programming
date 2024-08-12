#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);
 
 
void CoderSanskar()
{
    int lo = 2, hi = 999;
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        cout << "? " << mid << ' ' << mid << endl;
        int res;
        cin >> res;
        if (res == mid * mid)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    cout << "! " << lo << endl;
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
