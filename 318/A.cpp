#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    long long oddCount;
    cin >> n >> k;

    if (n % 2 == 0) {
        oddCount = n / 2;
    }
    else {
        oddCount = (n / 2) + 1;
    }

    if (k <= oddCount) {
        cout << 1 + (--k * 2);
    }
    else {
        cout << 2 + ((k - oddCount - 1) * 2);
    }

    return 0;
}
