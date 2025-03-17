#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    if(n % 2 == 0){
        int a = (n / (k-1));
        if(n % (k-1) != 0){
            a++;
        }
        cout << a << "\n";
    }
    else{
        n -= k;
        if(n > 0){
            int b = (n / (k-1));
            if(n % (k-1) != 0){
                cout << b + 2 << "\n";
            }
            else{
                cout << b + 1 << "\n";
            }
        }
        else{
            cout << 1 << "\n";
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