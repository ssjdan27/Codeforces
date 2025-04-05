#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int oddCount = 0, evenCount = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    bool possible = false;
    
    for(int odd = 1; odd <= oddCount && odd <= x; odd += 2) {
        int remainingNeeded = x - odd;
        if(remainingNeeded <= evenCount) {
            possible = true;
            break;
        }
    }
    
    if(possible) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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