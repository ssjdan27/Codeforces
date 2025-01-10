#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int res = 1000000;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        res = min(res, abs(num - 0));
    }

    cout << res << "\n";

    return 0;
}
