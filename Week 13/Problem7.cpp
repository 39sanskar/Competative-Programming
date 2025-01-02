#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
 
        int n = s.length(), ans = 0, sum = 0, mod = 1e9 + 7;
        map<int, int> cnt;
        cnt[0] = 1;
 
        for (int i = 0; i < n; i++) {
            sum += s[i] == '1' ? 1 : -1;
            ans = (ans + 1LL * cnt[sum] * (n - i)) % mod;
            cnt[sum] = (cnt[sum] + i + 2) % mod;
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
