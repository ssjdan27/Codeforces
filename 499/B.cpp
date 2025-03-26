#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    unordered_map<string, pair<string, string>> mp;
    for (int i = 0; i < m; i++)
    {
        string first, second;
        cin >> first >> second;
        mp[first] = {first, second};
    }

    string notes;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        if (mp[word].first.length() <= mp[word].second.length())
        {
            notes += mp[word].first;
        }
        else
        {
            notes += mp[word].second;
        }
        if (i != n - 1)
        {
            notes += " ";
        }
    }

    cout << notes << "\n";

    return 0;
}