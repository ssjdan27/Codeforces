#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    unordered_map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string tmp = s.substr(i, 2);
        mp[tmp]++;
    }

    int maxTimes = 0;
    string twoGram;
    for (auto m : mp)
    {
        if (m.second > maxTimes)
        {
            maxTimes = m.second;
            twoGram = m.first;
        }
    }

    cout << twoGram << "\n";

    return 0;
}