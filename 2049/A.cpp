#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        int continuousSections = 0;
        vector<int> numbers;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            numbers.push_back(num);
        }

        bool inSection = false;
        for (int x : numbers) {
            if (x != 0) {
                if (!inSection) {
                    inSection = true;
                    continuousSections++;
                }
            }
            else {
                inSection = false;
            }
        }

        if (continuousSections <= 2) {
            cout << continuousSections << "\n";
        }
        else {
            cout << 2 << "\n";
        }


    }
    return 0;
}