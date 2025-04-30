#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  unordered_set<int> a;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    a.insert(num);
  }

  if (a.size() < n) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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