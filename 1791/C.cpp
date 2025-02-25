#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int length = n;
    int l = 0;
    int r = n-1;
    while (l < r) {
        if (s[l] == s[r]) {
            break;
        }
        length -= 2;
        l++;
        r--;
    }

    cout << length << "\n";

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
