#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << 1;
            if (i != n - 1)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    else if (k == 1 || (k == 2 && n % 2 == 1))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        cout << n / 2 << "\n";
        if (n % 2 == 1)
        {
            cout << 3 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << 2;
            if (i != n / 2 - 2)
            {
                cout << " ";
            }
        }
        cout << "\n";
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