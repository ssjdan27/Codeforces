#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> timeNeeded(26, 0);
    
    for(char c : s) {
        timeNeeded[c - 'A']++;
    }
    
    int solved = 0;
    for(int i = 0; i < 26; i++) {
        if(timeNeeded[i] >= i + 1) {
            solved++;
        }
    }
    
    cout << solved << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}