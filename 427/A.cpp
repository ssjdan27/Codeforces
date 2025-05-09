#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int police = 0;
    int crimes = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == -1 && police > 0)
        {
            police--;
        }
        else if (num == -1 && police == 0)
        {
            crimes++;
        }
        if (num > 0)
        {
            police += num;
        }
    }

    cout << crimes << "\n";

    return 0;
}