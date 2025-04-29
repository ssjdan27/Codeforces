#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int maxLetter = 0;
    for (char c : s)
    {
        maxLetter = max(maxLetter, c - 'a' + 1);
    }
    cout << maxLetter << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}