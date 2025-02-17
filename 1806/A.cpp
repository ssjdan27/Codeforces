#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d < b)
    {
        cout << -1 << "\n";
    }
    else
    {
        int steps = 0;
        int up = d - b;
        steps += up;
        b = d;
        a += up;
        if (c > a)
        {
            cout << -1 << "\n";
        }
        else
        {
            steps += abs(c - a);
            cout << steps << "\n";
        }
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