#include <bits/stdc++.h>
using namespace std;

void solve() {
    string ticket;
    cin >> ticket;
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < 6; i++) {
        i < 3 ? leftSum += ticket[i] - '0' : rightSum += ticket[i] - '0';
    }

    if (leftSum == rightSum) {
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
