#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> cuts = {a, b, c};
    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int c : cuts)
        {
            if (i - c >= 0 && dp[i - c] != -1)
            {
                dp[i] = max(dp[i], dp[i - c] + 1);
            }
        }
    }

    cout << dp[n] << "\n";

    return 0;
}