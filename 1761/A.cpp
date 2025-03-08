#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,a,b;
    cin >> n >> a >> b;
    if (a + b + 2 <= n) {
        cout << "YES\n";
    }
    else if (a == b && a == n) {
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
