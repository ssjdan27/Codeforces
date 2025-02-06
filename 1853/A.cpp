#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    if (!is_sorted(nums.begin(), nums.end()))
    {
        cout << 0 << "\n";
        return;
    }

    int minDiff = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        minDiff = min(minDiff, nums[i + 1] - nums[i]);
    }

    cout << minDiff / 2 + 1 << "\n";
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