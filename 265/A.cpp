#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int pos = 1;
    int i = 0;
    for (char c : t)
    {
        if (c == s[i])
        {
            pos++;
            i++;
        }
    }

    cout << pos << "\n";

    return 0;
}