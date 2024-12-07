#include <iostream>
using namespace std;
int main()
{
    int n;
    int groups = 0;
    cin >> n;
    string prevMagnet;
    cin >> prevMagnet;

    for (int i = 0; i < n - 1; i++)
    {
        string magnet;
        cin >> magnet;
        if (magnet != prevMagnet)
        {
            groups++;
        }
        prevMagnet = magnet;
    }

    cout << ++groups;
    return 0;
}