#include <bits/stdc++.h>
using namespace std;

void solve() {
    int one,two, four, five;
    int maxFib = 0;
    cin >> one >> two >> four >> five;

    unordered_map<int, int> freq;

    int valOne = one + two;
    freq[valOne]++;
    int valTwo = four - two;
    freq[valTwo]++;
    int valThree = five - four;
    freq[valThree]++;

    for (auto &x: freq) {
        maxFib = max(maxFib, x.second);
    }

    cout << maxFib << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
