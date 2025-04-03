#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    int res;

    if (k == 0)
    {
        res = nums[0] - 1;
    }
    else
    {
        res = nums[k - 1];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= res)
        {
            count++;
        }
    }

    if (count != k || !(1 <= res && res <= 1000 * 1000 * 1000))
    {
        cout << -1 << "\n";
        return 0;
    }

    cout << res << "\n";

    return 0;
}