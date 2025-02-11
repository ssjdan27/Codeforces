#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int minIndex = 0;
    int maxIndex = 0;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int soldier;
        cin >> soldier;
        if (soldier <= minVal)
        {
            minVal = soldier;
            minIndex = i;
        }
        if (soldier > maxVal)
        {
            maxVal = soldier;
            maxIndex = i;
        }
    }

    cout << ((maxIndex > minIndex) ? (maxIndex - 0 + n - minIndex - 2) : (maxIndex + n - minIndex - 1));
    return 0;
}