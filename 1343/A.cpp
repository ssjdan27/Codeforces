#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    for(int i = 2; i < 30; i++){
        int val = (1 << i) - 1;
        if(n % val == 0){
            cout << n / val << "\n";
            break;
        }
    }
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