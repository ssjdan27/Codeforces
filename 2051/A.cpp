#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        int maxDifference = 0;
        cin >> n;
        vector<int> mono(n);
        vector<int> stereo(n);

        for (int i = 0; i < n; i++) {
            cin >> mono[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> stereo[i];
        }

        for (int i = 0; i < n - 1; i++) {
            if (mono[i] > stereo[i+1]) {
                maxDifference += mono[i] - stereo[i+1];
            }
        }
        int lastElement = mono.back();
        maxDifference += lastElement;
        cout << maxDifference << "\n";
    }
    return 0;
}