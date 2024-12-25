#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int xforce = 0;
    int yforce = 0;
    int zforce = 0;
    cin >> n;

    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        xforce += x;
        yforce += y;
        zforce += z;
    }

    if (xforce == 0 && yforce == 0 && zforce == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}