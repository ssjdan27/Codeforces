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
    if (nums[0] == nums[nums.size() - 1])
    {
        cout << "NO\n";
        return;
    }
    swap(nums[0], nums[nums.size() - 1]);
    swap(nums[nums.size()-1], nums[1]);

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