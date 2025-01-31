#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    for (char c : s)
    {
        ans += c - '0';
    }

    cout << ans << "\n";
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