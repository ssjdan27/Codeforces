#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    int score = 0;
    cin >> n >> k;
    vector<int> nums(n);
    unordered_map<int, int> complement;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums[i] = num;
        complement[k - num]++;
    }

    for (int x: nums) {
        if (complement[x] > 0) {
            score++;
            complement[x]--;
        }
    }

    cout << score/2 << "\n";
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
