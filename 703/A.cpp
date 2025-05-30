#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  int m = 0, c = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (a > b)
      m++;
    if (b > a)
      c++;
  }

  if (m > c) {
    cout << "Mishka\n";
  } else if (c > m) {
    cout << "Chris\n";
  } else {
    cout << "Friendship is magic!^^\n";
  }

  return 0;
}