#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_set<int> distinctA;
    unordered_set<int> distinctB;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        distinctA.insert(num);
    }
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        distinctB.insert(num);
    }

    if (distinctA.size() + distinctB.size() > 3) {
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
