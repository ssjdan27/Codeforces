#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> target(10, vector<int>(10, 0));

    for (int i = 1; i <= 5; i++)
    {
        for (int x = i - 1; x < 10 - i + 1; x++)
        {
            target[i - 1][x] = i;
            target[10 - i][x] = i;
        }

        for (int y = i - 1; y < 10 - i + 1; y++)
        {
            target[y][i - 1] = i;
            target[y][10 - i] = i;
        }
    }

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        int res = 0;

        for (int i = 0; i < 10; i++)
        {
            string row;
            getline(cin, row);

            for (int j = 0; j < 10; j++)
            {
                if (row[j] == 'X')
                {
                    res += target[i][j];
                }
            }
        }

        cout << res << "\n";
    }

    return 0;
}