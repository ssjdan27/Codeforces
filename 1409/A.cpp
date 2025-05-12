#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }

    int num = abs(b - a);
    int n1 = num / 10;
    int n2 = (num % 10 == 0) ? 0 : 1;
    cout << n1 + n2 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}