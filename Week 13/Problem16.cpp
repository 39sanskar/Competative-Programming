#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);
#define int long long
 
vector<int> pr;
 
int calc(int n)
{
    if (n < 3)
        return 1;
    return 1 + calc(n / 3);
}
//log3(n)
 
void CoderSanskar()
{
    int l, r;
    cin >> l >> r;
    int ans = calc(l) * 2 + pr[r] - pr[l];
    cout << ans << '\n';
}
 
int32_t main()
{
    fastIO;
 
    pr.assign(3e5, 0);
    pr[1] = 1;
    for (int i = 2; i < 3e5; i++)
    {
        pr[i] = pr[i - 1] + calc(i);
    }
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        CoderSanskar();
    }
    return 0;
}
