#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string res;
    for (int i = 0; i < 8; i++)
    {
        string row;
        cin >> row;
        for (char c : row)
        {
            if (c != '.')
            {
                res += c;
                break;
            }
        }
    }

    cout << res << "\n";
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