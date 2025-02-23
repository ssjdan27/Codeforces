#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    unordered_map<char, int> freq;
    for (char c: s) {
        freq[c]++;
    }
    int oddCount = 0;
    for (auto x: freq) {
        if (x.second % 2 == 1) {
            oddCount++;
        }
    }

    if (oddCount > k + 1) {
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
