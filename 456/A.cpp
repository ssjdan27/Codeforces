#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> priceQuality(n);
    for (int i = 0; i < n; i++) {
        cin >> priceQuality[i].first >> priceQuality[i].second;
    }

    sort(priceQuality.begin(), priceQuality.end(), cmp);

    bool happyAlex = false;
    for (int i = 1; i < n; i++) {
        if (priceQuality[i].second < priceQuality[i - 1].second) {
            happyAlex = true;
            break;
        }
    }

    if (happyAlex) {
        cout << "Happy Alex\n";
    } else {
        cout << "Poor Alex\n";
    }

    return 0;
}
