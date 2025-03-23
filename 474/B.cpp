#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int m;
    cin >> m;
    vector<int> mw(m);
    for (int i = 0; i < m; i++)
    {
        cin >> mw[i];
    }

    vector<int> prefix(n);
    int runSum = 0;
    for (int i = 0; i < n; i++)
    {
        runSum += w[i];
        prefix[i] = runSum;
    }

    for (int num : mw)
    {
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            int lowRange = (mid == 0 ? 1 : prefix[mid - 1] + 1);
            int highRange = prefix[mid];
            if (num >= lowRange && num <= highRange)
            {
                cout << mid + 1 << "\n";
                break;
            }
            else if (num < lowRange)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }

    return 0;
}