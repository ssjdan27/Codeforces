#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    string xs = to_string(x);
    int count = 0;
    for (char c : xs)
    {
        if (c != '0')
        {
            count++;
        }
    }
    return count == 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> checker;

    for (int i = 1; i < 1000000; i++)
    {
        if (check(i))
        {
            checker.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = 0;
        for (int num : checker)
        {
            if (num <= x)
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}