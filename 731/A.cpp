#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    s = "a" + s;
    int res = 0;

    for (int i = 0; i < s.length() - 1; i++)
    {
        int diff = abs(s[i] - s[i + 1]);
        res += min(diff, 26 - diff);
    }

    cout << res << "\n";

    return 0;
}