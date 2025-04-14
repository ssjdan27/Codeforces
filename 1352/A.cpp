#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> parts;
    int n;
    cin >> n;

    int place = 1;
    while(n > 0){
        int digit = n % 10;
        if(digit != 0){
            parts.push_back(digit * place);
        }

        n /= 10;
        place *= 10;
    }

    cout << parts.size() << "\n";
    for(int i = 0; i < parts.size(); i++){
        cout << parts[i];
        if(i != parts.size() - 1){
            cout << " ";
        }
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