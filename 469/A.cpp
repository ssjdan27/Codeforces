#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q;
    bool passing = true;
    unordered_set<int> allLevels;
    unordered_set<int> passingLevels;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        allLevels.insert(i);
    }

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        passingLevels.insert(level);
    }

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        passingLevels.insert(level);
    }

    for (int level : allLevels)
    {
        if (passingLevels.find(level) == passingLevels.end())
        {
            passing = false;
            break;
        }
    }

    if (passing)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}