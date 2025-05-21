#include <bits/stdc++.h>
using namespace std;
void solve() {
  int a, b, c, d;
  int front = 0;
  cin >> a >> b >> c >> d;
  if (b > a)
    front++;
  if (c > a)
    front++;
  if (d > a)
    front++;

  cout << front << "\n";
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