#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int nums[n];
    int x = 0;
    int res = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        x ^= nums[i];
    }

    for(int i = 0; i < n; i++){
        nums[i] ^= x;
    }
    
    for(int i = 0; i < n; i++){
        res ^= nums[i];
    }

    cout << (res ? -1 : x) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}