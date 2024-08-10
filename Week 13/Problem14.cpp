#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);
 
 
void CoderSanskar()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        vec[i] = {l, r};
    }
    int mx = vec[0].first;
    for (int i = 1; i < n; i++)
    {
        mx = max(mx, vec[i].first - vec[i - 1].second);
    }
    mx = max(mx, m - vec[n - 1].second);
 
    if(mx >= s) cout<<"YES\n";
    else cout<<"NO\n";
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
