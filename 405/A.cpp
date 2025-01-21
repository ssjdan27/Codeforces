#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> blocks(n);

    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }

    sort(blocks.begin(), blocks.end());

    for (int i = 0; i < n; i++) {
        cout << blocks[i];
        if (i < n - 1) {
            cout << " ";
        }
    }

    return 0;
}
