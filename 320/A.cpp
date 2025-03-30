#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int idx = 0;
    int n = s.length();
    bool valid = true;
    while (idx < n && valid)
    {
        if (s.substr(idx, 3) == "144")
        {
            idx += 3;
        }
        else if (s.substr(idx, 2) == "14")
        {
            idx += 2;
        }
        else if (s[idx] == '1')
        {
            idx++;
        }
        else
        {
            valid = false;
        }
    }

    if (valid)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}