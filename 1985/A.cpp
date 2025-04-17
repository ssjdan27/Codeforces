#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a, b;
    cin >> a >> b;
    cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << "\n";
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