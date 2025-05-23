#include <bits/stdc++.h>
using namespace std;
void solve() {
  vector<vector<char>> a(8, vector<char>(8));
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < 8; i++) {
    bool allR = true;
    for (int j = 0; j < 8; j++) {
      if (a[i][j] != 'R') {
        allR = false;
        break;
      }
    }
    if (allR) {
      cout << "R\n";
      return;
    }
  }

  for (int i = 0; i < 8; i++) {
    bool allB = true;
    for (int j = 0; j < 8; j++) {
      if (a[j][i] != 'B') {
        allB = false;
        break;
      }
    }
    if (allB) {
      cout << "B\n";
      return;
    }
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