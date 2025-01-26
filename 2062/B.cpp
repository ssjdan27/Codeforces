#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> clocks(n);
    bool valid = true;
    for (int i = 0; i < n; i++) {
        cin >> clocks[i];
    }

    for (int i = 0; i < n; i++) {
        int d = 2 * max(i, n - 1 - i);
        if (clocks[i] <= d) {
            valid = false;
            break;
        }
    }

    if (valid) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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