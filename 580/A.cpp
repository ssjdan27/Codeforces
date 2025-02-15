#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> dp(n);
    vector<int> nums(n);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (nums[i] >= nums[i - 1])
        {
            dp[i] = ++dp[i - 1];
        }
        else
        {
            dp[i] = 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, dp[i]);
    }

    cout << ans;

    return 0;
}