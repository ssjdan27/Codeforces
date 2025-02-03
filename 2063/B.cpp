#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    l--; 

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> brr = arr;
    sort(brr.begin() + l, brr.end());
    long long sum1 = accumulate(brr.begin() + l, brr.begin() + r, 0LL); 

    vector<long long> crr = arr;
    sort(crr.begin(), crr.begin() + r, greater<long long>());
    long long sum2 = accumulate(crr.begin() + l, crr.begin() + r, 0LL); 

    cout << min(sum1, sum2) << "\n";
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
