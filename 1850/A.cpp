#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int sum1 = a + b;
    int sum2 = a + c;
    int sum3 = b + c;
    if(sum1 >= 10 || sum2 >= 10 || sum3 >= 10){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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