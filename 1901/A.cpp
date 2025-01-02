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
        int n, x;
        int maxDistance = 0;
        cin >> n >> x;
        vector<int> stations(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i];
        }

        maxDistance = max(maxDistance, stations[0] - 0);

        for (int i = 1; i < n; i++)
        {
            maxDistance = max(maxDistance, stations[i] - stations[i - 1]);
        }

        maxDistance = max(maxDistance, (x - stations.back()) * 2);

        cout << maxDistance << "\n";
    }

    return 0;
}