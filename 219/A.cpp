#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int k;
  string a, b, res;
  cin >> k >> a;
  unordered_map<char, int> f;
  for (char c : a) {
    f[c]++;
  }

  for (auto x : f) {
    if (x.second % k != 0) {
      cout << -1 << "\n";
      return 0;
    } else {
      for (int i = 0; i < x.second / k; i++) {
        b += x.first;
      }
    }
  }

  for (int i = 0; i < k; i++) {
    res += b;
  }

  cout << res << "\n";

  return 0;
}