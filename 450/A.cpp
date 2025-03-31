#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> children;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        pair p = {num, i + 1};
        children.push_back(p);
    }

    while (!children.empty())
    {
        if (children.size() == 1)
        {
            cout << children[0].second << "\n";
            return 0;
        }
        if (children[0].first <= m)
        {
            children.erase(children.begin());
        }
        else
        {
            children.emplace_back(children[0].first - m, children[0].second);
            children.erase(children.begin());
        }
    }

    return 0;
}