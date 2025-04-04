#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    long long oneCost = 0;
    long long twoCost = 0;
    long long small = min(x,y);
    long long diff = abs(x - y);
    oneCost = small * b + diff * a;
    twoCost = x * a + y * a;
    if(oneCost < twoCost){
        cout << oneCost << "\n";
    }
    else{
        cout << twoCost << "\n";
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