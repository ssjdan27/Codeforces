#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }

    int l = 0;
    while (l < n - 1 && a[l] <= a[l + 1])
    {
        l++;
    }

    if (l == n - 1)
    {
        cout << "yes\n1 1\n";
        return 0;
    }

    int r = l;
    while (r < n - 1 && a[r] > a[r + 1])
    {
        r++;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (is_sorted(a.begin(), a.end()))
    {
        cout << "yes\n"
             << l + 1 << " " << r + 1 << "\n";
    }
    else
    {
        cout << "no\n";
    }

    return 0;
}