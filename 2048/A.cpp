#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        bool canEscape = true;
        string lock;
        cin >> lock;

        while (canEscape) {
            long long pos = lock.find("33");
            long long locky = stoll(lock);
            if (locky % 33 == 0) {
                lock = "0";
                break;
            }

            if (pos != std::string::npos && lock != "33") {
                lock.erase(pos, 2);
            }
            else {
                canEscape = false;
            }
        }

        if (!canEscape && lock != "0") {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }

    }
    return 0;
}