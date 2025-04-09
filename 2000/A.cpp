#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    if(s.length() < 3 || s.substr(0,2) != "10"){
        cout << "NO\n";
        return;
    }

    if(s.length() == 3){
        if(s[2] - '0' > 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    else{
        if(s[2] == '0'){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
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