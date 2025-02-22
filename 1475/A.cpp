#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x;
    cin >> x;
    if ((x & x - 1) == 0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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
