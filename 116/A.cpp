#include <iostream>
using namespace std;
int main()
{
    int n;
    int maxCapacity = 0;
    int current = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int exit, enter;
        cin >> exit >> enter;
        current -= exit;
        current += enter;
        maxCapacity = max(maxCapacity, current);
    }

    cout << maxCapacity;

    return 0;
}