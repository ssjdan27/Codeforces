#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    int zero = 3;
    int one = 1;
    int two = 2;
    int three = 1;
    int five = 1;
    cin >> n;
    bool valid = false;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
            zero--;
        else if (num == 1)
            one--;
        else if (num == 2)
            two--;
        else if (num == 3)
            three--;
        else if (num == 5)
            five--;

        if (!valid && zero <= 0 && one <= 0 && two <= 0 && three <= 0 && five <= 0)
        {
            cout << i << "\n";
            valid = true;
        }
    }
    if (!valid)
    {
        cout << 0 << "\n";
    }
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