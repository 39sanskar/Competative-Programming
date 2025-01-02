#include <bits/stdc++.h>
using namespace std;
 
long long countLarger(int val, vector<int> &a, vector<int> &b) {
    int n = a.size();
    long long result = 0;
    for (int i = 0; i < n; i++) {
        result += a[i] >= val ? (a[i] - val) / b[i] + 1 : 0;
    }
    return result;
}
 
long long sumAP(int cnt, int end, int diff) {
    int start = end - (cnt - 1) * diff;
    return 1LL * cnt * (start + end) / 2;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        int start = 0, end = 1e9, res = start;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (countLarger(mid, a, b) >= k) {
                res = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
 
        long long ans = 0;
        int total_count = 0;
        for (int i = 0; i < n; i++) {
            int cnt = a[i] > res ? (a[i] - res - 1) / b[i] + 1 : 0;
            total_count += cnt;
            ans += sumAP(cnt, a[i], b[i]);
        }
 
        ans += 1LL * (k - total_count) * res;
 
        cout << ans << "\n";
    }
 
    return 0;
}
