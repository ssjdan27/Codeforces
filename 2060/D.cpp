#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            j = i;
        }
    }

    if (j == 0)
    {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int sub = min(nums[i], nums[i + 1]);
        nums[i] -= sub;
        nums[i + 1] -= sub;
    }

    cout << (is_sorted(nums.begin(), nums.end()) ? "YES\n" : "NO\n");
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