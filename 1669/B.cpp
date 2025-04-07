#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int res = -1;
    for(int i = 0; i < n - 2; i++){
        if(a[i] == a[i+1] && a[i] == a[i+2]){
            res = a[i];
            break;
        }
    }

    cout << res << "\n";

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