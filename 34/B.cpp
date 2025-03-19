#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> tvs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tvs[i];
    }
    sort(tvs.begin(), tvs.end());
    int money = 0;
    for (int i = 0; i < m; i++)
    {
        if (tvs[i] <= 0)
        {
            money += abs(tvs[i]);
        }
    }
    cout << money << "\n";
    return 0;
}