#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int dotCount = 0;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin, s);

        if (s.find("...") != string::npos)
        {
            cout << "2\n";
        }
        else
        {
            for (char c : s)
            {
                if (c == '.')
                {
                    dotCount++;
                }
            }
            cout << dotCount << "\n";
        }
    }

    return 0;
}