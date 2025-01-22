#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int oddCount = 0;
    int evenCount = 0;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
        nums[i] = num;
    }

    bool lookForEven;
    if (evenCount == 1)
    {
        lookForEven = true;
    }
    else
    {
        lookForEven = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0 && lookForEven)
        {
            cout << i + 1;
            break;
        }
        else if (nums[i] % 2 == 1 && !lookForEven)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}