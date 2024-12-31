#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    long long traveled = 0;
    cin >> n >> m;

    long long pos = 1;
    while (m--)
    {
        long long house;
        cin >> house;
        traveled += (house < pos) ? ((n - pos) + house) : (house - pos);
        pos = house;
    }

    cout << traveled;

    return 0;
}