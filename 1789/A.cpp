#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    bool valid = false;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            int res = gcd(nums[i], nums[j]);
            if (res <= 2) {
                valid = true;
                break;
            }
        }
    }

    cout << (valid ? "YES\n" : "NO\n");
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
