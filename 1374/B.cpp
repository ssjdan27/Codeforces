#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int count2 = 0, count3 = 0;
    while(n % 2 == 0){
        n /= 2;
        count2++;
    }
    while(n % 3 == 0){
        n /= 3;
        count3++;
    }
    if(n == 1 && count2 <= count3){
        cout << 2 * count3 - count2 << "\n";
    }
    else{
        cout << -1 << "\n";
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