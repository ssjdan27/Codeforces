#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<string, int> freq;
    while (n--) {
        string name;
        cin >> name;
        freq[name]++;
        if (freq[name] > 1) {
            cout << name << freq[name] -1 << "\n";
        }
        else {
            cout << "OK\n";
        }
    }

    return 0;
}
