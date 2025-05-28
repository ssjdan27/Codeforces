#include <bits/stdc++.h>
using namespace std;
void solve() {
  string s, res;
  cin >> s;

  for (int i = 0; i < s.length() - 1; i += 2) {
    res += s[i];
  }
  res += s.back();

  cout << res << "\n";
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