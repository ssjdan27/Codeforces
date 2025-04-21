#include <bits/stdc++.h>
using namespace std;
void solve(){
    int res = 0;
    string c = "codeforces";
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(c[i] != s[i]){
            res++;
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