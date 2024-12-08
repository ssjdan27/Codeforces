#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    long long int result = 0;
    cin >> n;
    unsigned long long int evenSum = (n / 2) * ((n / 2) + 1);
    unsigned long long int oddSum = (n % 2 == 1) ? ((n + 1) / 2) * ((n + 1) / 2) : (n / 2) * (n / 2);

    result = evenSum - oddSum;
    cout << result;
    
    return 0;
}