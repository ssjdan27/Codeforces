#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int mVal;
    cin >> mVal;

    nums[0] = min(nums[0], mVal - nums[0]);

    for (int i = 1; i < n; i++)
    {
        int aa = mVal - nums[i];
        if (min(aa, nums[i]) >= nums[i - 1])
        {
            nums[i] = min(aa, nums[i]);
        }
        else if (max(aa, nums[i]) < nums[i - 1])
        {
            cout << "NO\n";
            return;
        }
        else
        {
            nums[i] = max(aa, nums[i]);
        }
    }

    cout << "YES\n";
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