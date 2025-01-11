#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    vector<int> res;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    res.push_back(nums[0]);

    for (int i = 1; i < n; i++) {
        if (nums[i - 1] <= nums[i]) {
            res.push_back(nums[i]);
        }
        else {
            res.push_back(1);
            res.push_back(nums[i]);
        }
    }

    int k = res.size();
    cout << k << "\n";
    for (int i = 0; i < k; i++) {
        cout << res[i];
        if (i != k - 1) {
            cout << " ";
        }
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
