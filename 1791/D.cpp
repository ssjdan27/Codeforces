#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> left(26, 0), right(26, 0);
    int uniqueLeft = 0, uniqueRight = 0;

    for (char c : s)
    {
        if (right[c - 'a'] == 0)
        {
            uniqueRight++;
        }
        right[c - 'a']++;
    }

    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        char c = s[i];

        if (left[c - 'a'] == 0)
        {
            uniqueLeft++;
        }
        left[c - 'a']++;

        right[c - 'a']--;
        if (right[c - 'a'] == 0)
        {
            uniqueRight--;
        }

        ans = max(ans, uniqueLeft + uniqueRight);
    }

    cout << ans << "\n";
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
