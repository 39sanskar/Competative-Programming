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
        int m1 = lo + (hi - lo) / 3;
        int m2 = lo + 2 * (hi - lo) / 3;
        cout << "? " << m1 << ' ' << m2 << endl;
        int res;
        cin >> res;
        if (res == m1 * m2)
        {
            lo = m2 + 1;
        }
        else if (res == m1 * (m2 + 1))
        {
            lo = m1 + 1;
            hi = m2;
        }
        else
        {
            hi = m1;
        }
    }
