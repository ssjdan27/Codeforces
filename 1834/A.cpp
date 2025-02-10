#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int negativeOnes = 0;
    int positiveOnes = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == -1)
        {
            negativeOnes++;
        }
        else
        {
            positiveOnes++;
        }
    }

    int op = 0;
    while (negativeOnes > positiveOnes)
    {
        positiveOnes++;
        negativeOnes--;
        op++;
    }

    cout << ((negativeOnes % 2 == 0) ? op : op + 1) << "\n";
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