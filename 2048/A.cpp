#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int lock;
        cin >> lock;

        if (lock % 33 == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }
    return 0;
}