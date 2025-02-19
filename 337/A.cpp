#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int puzzles[m];
    for (int i = 0; i < m; i++)
    {
        cin >> puzzles[i];
    }
    sort(puzzles, puzzles + m);
    int ans = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        ans = min(ans, puzzles[i + n - 1] - puzzles[i]);
    }
    cout << ans;
    return 0;
}