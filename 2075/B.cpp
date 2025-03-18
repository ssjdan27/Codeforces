#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    if (k == 1)
    {
        cout << max(nums[0] + *max_element(nums.begin() + 1, nums.end()), *max_element(nums.begin(), nums.end() - 1) + nums[n - 1]) << "\n";
    }
    else
    {
        nth_element(nums.begin(), nums.begin() + k + 1, nums.end(), greater<int>());
        cout << accumulate(nums.begin(), nums.begin() + k + 1, 0LL) << "\n";
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