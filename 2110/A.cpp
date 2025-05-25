#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int res = INT_MAX;
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if ((a[i] + a[n - 1]) % 2 == 0)
        {
            res = min(res, i);
        }
        if ((a[0] + a[n - 1 - i]) % 2 == 0)
        {
            res = min(res, i);
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