#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    long long ans = 0, sum = 0;
    int mx = 0;
    for (int i = 0; i < min(n, k); i++) {
        sum += a[i];       
        mx = max(mx, b[i]);
        ans = max(ans, sum + 1LL * (k - i - 1) * mx);
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}