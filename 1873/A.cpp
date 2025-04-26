#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    int count = 0;
    string ex = "abc";
    cin >> s;

    for (int i = 0; i < 3; i++)
    {
        if (s[i] != ex[i])
        {
            count++;
        }
    }

    if (count > 2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
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