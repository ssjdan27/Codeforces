#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int hours = a;

    while (true)
    {
        int madeCandles = a / b;
        hours += madeCandles;
        a = madeCandles + a % b;
        if (a < b)
        {
            break;
        }
    }

    cout << hours;

    return 0;
}