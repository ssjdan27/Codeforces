#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;
    int rides = 0;
    int cost = 0;
    cin >> n >> m >> a >> b;

    while (rides < n)
    {
        double pricePerRide = (n - rides >= m) ? (double)b / m : (double)b / (n-rides);
        if (pricePerRide < a)
        {
            rides += m;
            cost += b;
        }
        else
        {
            rides++;
            cost += a;
        }
    }

    cout << cost;

    return 0;
}