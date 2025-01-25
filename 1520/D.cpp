#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> a;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x -= i;
        ans += a[x];
        a[x]++;
    }

    cout << ans << "\n";
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
