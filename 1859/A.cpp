#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (a.front() == a.back()) {
        cout << -1 << "\n";
        return;
    }

    vector<int> b, c;
    for (int x : a) {
        if (x == a[0]) {
            b.push_back(x);
        } else {
            c.push_back(x);
        }
    }

    cout << b.size() << " " << c.size() << "\n";
    for (int x : b) {
        cout << x << " ";
    }
    cout << "\n";
    for (int x : c) {
        cout << x << " ";
    }
    cout << "\n";
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
