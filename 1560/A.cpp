#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> like;
    int num = 1;
    while (like.size() < 1000)
    {
        if (num % 3 != 0 && num % 10 != 3)
        {
            like.push_back(num);
        }
        num++;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << like[k - 1] << "\n";
    }
    return 0;
}