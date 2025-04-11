#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> nums(n + 1);
    vector<long long> prefix(n + 1, 0); 

    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
        prefix[i] = prefix[i - 1] + nums[i];
    }

    for (int i = 0; i < q; i++) {
        long long l, r, k;
        cin >> l >> r >> k;
        long long rangeSum = prefix[r] - prefix[l - 1];
        long long ans = prefix[n] - rangeSum + k * (r - l + 1);
        if (ans % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}