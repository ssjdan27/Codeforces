#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.first < b.first;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cowCards;
    bool valid = true;

    for (int i = 0; i < n; i++) {
        vector<int> cards(m);
        for (int j = 0; j < m; j++) {
            cin >> cards[j];
        }

        sort(cards.begin(), cards.end());
        cowCards.push_back(cards);
    }

    vector<pair<int,int>> turnSequence;

    for (int i = 0; i < n; i++) {
        auto p = make_pair(cowCards[i][0], i);
        turnSequence.push_back(p);
    }

    sort(turnSequence.begin(), turnSequence.end(), cmp);

    int prevCard = -1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int currCard = cowCards[turnSequence[j].second][i];
            if (currCard < prevCard) {
                valid = false;
                break;
            }
            prevCard = currCard;
        }
    }

    if (valid) {
        for (int i = 0; i < n; i++) {
            cout << turnSequence[i].second + 1;
            if (i < n - 1) {
                cout << " ";
            }
        }
    }
    else {
        cout << -1;
    }

    cout << endl;

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
