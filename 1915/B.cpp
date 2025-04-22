#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> found(3, 0);
    for (int i = 0; i < 3; i++) {
        string r;
        cin >> r;
        for (char c : r) {
            if (c >= 'A' && c <= 'C') {
                found[c - 'A']++;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (found[i] == 2) {
            cout << char('A' + i) << "\n";
            return;
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