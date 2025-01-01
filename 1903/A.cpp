#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        if (k > 1)
        {
            cout << "YES\n";
        }
        else
        {
            vector<int> sortedNums = nums;
            sort(sortedNums.begin(), sortedNums.end());
            if (sortedNums == nums)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}