#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  unsigned long long k = n / 2;
  unsigned long long res = (k * (k + 1) * (2 * k + 1)) / 6;
  cout << res * 8 << "\n";
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