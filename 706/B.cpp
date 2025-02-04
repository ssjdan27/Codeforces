#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> drinks(n);

    for (int i = 0; i < n; i++) {
        cin >> drinks[i];
    }

    sort(drinks.begin(), drinks.end());

    int q;
    cin >> q;
    while (q--) {
        int target;
        cin >> target;

        int ans = upper_bound(drinks.begin(), drinks.end(), target) - drinks.begin();

        cout << ans << "\n";
    }

    return 0;
}
