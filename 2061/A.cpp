#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    if (evenCount == 0) {
        cout << oddCount - 1 << "\n";
    }
    else {
        cout << oddCount + 1 << "\n";
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
