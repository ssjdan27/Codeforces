#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    unordered_set<char> a;
    int res = 0;
    cin >> n >> s;
    for (char c : s)
    {
        if (a.find(c) == a.end())
        {
            res += 2;
            a.insert(c);
        }
        else
        {
            res++;
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