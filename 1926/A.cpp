#include <bits/stdc++.h>
using namespace std;
void solve() {
  string s;
  cin >> s;
  int a = 0, b = 0;
  for (char c : s) {
    if (c == 'A')
      a++;
    else
      b++;
  }

  if (a > b) {
    cout << "A" << "\n";
  } else {
    cout << "B" << "\n";
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