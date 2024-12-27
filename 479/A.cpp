#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    int maxValue = 0;
    cin >> a >> b >> c;

    int exp1 = a + b + c;
    maxValue = max(maxValue, exp1);
    int exp2 = a * b + c;
    maxValue = max(maxValue, exp2);
    int exp3 = a + b * c;
    maxValue = max(maxValue, exp3);
    int exp4 = a * b * c;
    maxValue = max(maxValue, exp4);
    int exp5 = a * (b + c);
    maxValue = max(maxValue, exp5);
    int exp6 = (a * b) + c;
    maxValue = max(maxValue, exp6);
    int exp7 = a + (b * c);
    maxValue = max(maxValue, exp7);
    int exp8 = (a + b) * c;
    maxValue = max(maxValue, exp8);

    cout << maxValue;

    return 0;
}