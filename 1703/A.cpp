#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return tolower(c);});
    cout << (s == "yes" ? "YES\n" : "NO\n");
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