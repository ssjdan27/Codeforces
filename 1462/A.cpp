#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;

    while(l <= r){
        cout << a[l] << " ";
        l++;
        if(l > r){
            break;
        }

        cout << a[r] << " ";
        r--;
    }

    cout << "\n";

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