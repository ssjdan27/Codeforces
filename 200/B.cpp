#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int totalVolumeFraction = 0;
    double result;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        totalVolumeFraction += num;
    }

    result = (double)totalVolumeFraction / n;

    printf("%.9f", result);

    return 0;
}