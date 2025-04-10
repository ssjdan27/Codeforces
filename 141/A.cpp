#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string guest, host, pile;
    cin >> guest >> host >> pile;
    string combined = guest + host;
    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());
    if (combined == pile)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}