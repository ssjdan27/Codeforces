#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> b = a;
  sort(b.begin(), b.end(), greater<>());
  for (int i = 0; i < n; i++) {
    if (a[i] == b[0]) {
      cout << a[i] - b[1] << " ";
    } else {
      cout << a[i] - b[0] << " ";
    }
  }
  cout << "\n";
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