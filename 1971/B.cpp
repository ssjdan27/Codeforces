#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    bool valid = false;
    for(int i = 1; i < s.length(); i++){
        if(s[i] != s[0]){
            swap(s[i], s[0]);
            valid = true;
            break;
        }
    }

    if(!valid){
       cout << "NO\n"; 
    }
    else{
        cout << "YES\n";
        cout << s << "\n";
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