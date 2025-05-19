#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < 7; i++) {
    int day;
    cin >> day;
    a.push_back(day);
  }

  int i = 0;
  while (n > 0) {
    n -= a[i];
    i++;
    i %= 7;
  }

  if (i == 0)
    i = 7;

  cout << i << "\n";

  return 0;
}