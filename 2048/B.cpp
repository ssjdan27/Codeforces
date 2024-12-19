#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> p(n, -1);
    int cur = 0;
    for (int i = k - 1; i < n; i += k) {
        p[i] = ++cur;
    }
    for (int i = 0; i < n; i++) {
        if (p[i] == -1) {
            p[i] = ++cur;
        }
        cout << p[i] << " \n"[i == n - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}