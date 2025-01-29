#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int maxRemainder = 0;
    int evenCount = 0;
    bool isDivisible = false;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int remainder = x % k;

        if (remainder == 0)
        {
            isDivisible = true;
        }
        else
        {
            maxRemainder = max(maxRemainder, remainder);
        }

        if (k == 4 && remainder == 2)
        {
            evenCount++;
        }
    }

    if (isDivisible)
    {
        cout << "0\n";
        return;
    }

    if (k == 4)
    {
        if (evenCount >= 2)
        {
            cout << "0\n";
        }
        else if (evenCount == 1 || maxRemainder == 3)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
        return;
    }

    cout << (k - maxRemainder) << "\n";
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
