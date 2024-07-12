#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> // For INT_MAX

using namespace std;

bool canAchieveUniformWeight(const vector<int>& a, int n, int x) {
    // Calculate the total difference required to make all elements equal to x
    int totalDiff = 0;
    for (int weight : a) {
        totalDiff += abs(weight - x);
    }

    // Check if the total difference is achievable (even number of weight changes)
    return totalDiff % 2 == 0;
}

int maximumUniformWeight(const vector<int>& a, int n) {
    int low = 1, high = *max_element(a.begin(), a.end());

    // Handle edge case where all elements are the same (any weight is achievable)
    if (low == high) {
        return low;
    }

    int best = low;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canAchieveUniformWeight(a, n, mid)) {
            best = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return best;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int result = maximumUniformWeight(a, n);
        cout << result << endl;
    }

    return 0;
}
