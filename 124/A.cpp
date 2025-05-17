#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    int res = n - max(a + 1, n - b) + 1;
    cout << res << "\n";
    return 0;
}