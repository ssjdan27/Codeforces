#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<>());

    int sum = 0;
    int maxBelow = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum <= k)
        {
            maxBelow = sum;
        }
    }

    cout << k - maxBelow << "\n";
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