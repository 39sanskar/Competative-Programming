#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);
 
 
void CoderSanskar()
{
    string s, t;
    cin >> s >> t;
    int i = 0, n = s.size(), m = t.size();
    for (int j = 0; j < m; j++)
    {
        while (i < n && s[i] != t[j])
        {
            if (s[i] == '?')
            {
                s[i] = t[j];
                break;
            }
            i++;
        }
        if (i < n && s[i] == t[j])
        {
            i++;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    while (i < n)
    {
        if (s[i] == '?')
            s[i] = 'a';
        i++;
    }
    cout << s << '\n';
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
