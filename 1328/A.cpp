#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        if (a % b == 0) {
            cout << 0 << "\n";
        }
        else if (b > a) {
            cout << b - a << "\n";
        }
        else {
            cout << b - (a % b) << "\n";
        }
    }
    return 0;
}