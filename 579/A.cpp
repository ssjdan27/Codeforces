// an alternative solution to this would be to use __builtin_popcount but I thought this was more explicit
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    int ans = 0;
    cin >> x;
    while(x){
        if(x & 1){
            ans++;
        }
        x >>= 1;
    }
    cout << ans;
    return 0;
}