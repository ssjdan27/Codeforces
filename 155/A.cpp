#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int res = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        bool amazing1 = true;
        bool amazing2 = true;
        for (int j = 0; j < i; j++)
        {
            if (a[j] >= a[i])
                amazing1 = false;

            if (a[j] <= a[i])
                amazing2 = false;
        }

        if (amazing1 || amazing2)
        {
            res++;
        }
    }

    cout << res << "\n";

    return 0;
}