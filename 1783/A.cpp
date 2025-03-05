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
    sort(nums.begin(), nums.end(), greater<int>());
    swap(nums[1], nums[nums.size() - 1]);
    int leftSum = 0;

    for (int num : nums)
    {
        if (leftSum == num)
        {
            cout << "NO\n";
            return;
        }

        leftSum += num;
    }

    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    cout << "\n";
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