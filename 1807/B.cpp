#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;

   for (int i = 0; i < n; i++) {
       int x;
       cin >> x;
       if (x % 2 == 0) {
           even += x;
       }
       else {
           odd += x;
       }
   }

   if (even > odd) {
       cout << "YES\n";
   }
   else {
        cout << "NO\n";
   }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
