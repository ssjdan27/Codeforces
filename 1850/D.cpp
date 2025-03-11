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

    sort(nums.begin(), nums.end());

    int longestSeq = 1;
    int currSeq = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] - nums[i] <= k)
        {
            currSeq++;
            longestSeq = max(longestSeq, currSeq);
        }
        else
        {
            longestSeq = max(longestSeq, currSeq);
            currSeq = 1;
        }
    }

    cout << n - longestSeq << "\n";
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