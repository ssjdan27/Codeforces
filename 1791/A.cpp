#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unordered_set<char> letters = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    char c;
    cin >> c;
    cout << (letters.find(c) == letters.end() ? "NO\n" : "YES\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}