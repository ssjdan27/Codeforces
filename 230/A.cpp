#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    bool defeated = false;
    cin >> s >> n;
    vector<pair<int, int>> dragons(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end(), cmp);

    for (const auto &dragon : dragons)
    {
        if (s <= dragon.first)
        {
            defeated = true;
            break;
        }
        s += dragon.second;
    }

    if (!defeated)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}