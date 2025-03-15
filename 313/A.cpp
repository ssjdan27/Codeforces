#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int maxAmount = stoi(s);

    if (stoi(s.substr(0, s.length() - 1)) > maxAmount)
    {
        maxAmount = stoi(s.substr(0, s.length() - 1));
    }

    if (stoi(s.substr(0, s.length() - 2) + s.back()) > maxAmount)
    {
        maxAmount = stoi(s.substr(0, s.length() - 2) + s.back());
    }

    cout << maxAmount << "\n";

    return 0;
}