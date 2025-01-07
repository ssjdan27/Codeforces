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
        bool valid = false;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == k)
            {
                valid = true;
            }
        }

        if (valid)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}