#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> intervals;
    intervals.push_back({0, 0});
    intervals.push_back({m, m});

    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        intervals.push_back({start, end});
    }

    sort(intervals.begin(), intervals.end());

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i].first - intervals[i - 1].second >= s) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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