#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    int res = 0;
    int grow = 0;
    vector<int> months(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> months[i];
    }

    sort(months.begin(), months.end(), greater<int>());

    for (int num : months)
    {
        if (grow >= k)
        {
            break;
        }
        grow += num;
        res++;
    }

    if (grow < k)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << res << "\n";
    }

    return 0;
}