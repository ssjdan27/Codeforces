#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(101, {0, 0});
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a[num] = {++a[num].first, i + 1};
    }

    int res;

    for (auto x : a)
    {
        if (x.first == 1)
        {
            res = x.second;
            break;
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