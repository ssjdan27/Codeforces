#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string nString;
    bool isAlmostLucky = false;
    cin >> n;

    nString = to_string(n);
    unordered_set<char> nums(nString.begin(), nString.end());

    if (nums.size() == 1 && (nums.find('4') != nums.end() || nums.find('7') != nums.end()))
    {
        isAlmostLucky = true;
    }
    else if (nums.size() <= 2 && (nums.find('4') != nums.end() && nums.find('7') != nums.end()))
    {
        isAlmostLucky = true;
    }

    else
    {
        for (int i = n - 1; i > 3; i--)
        {
            string iString = to_string(i);
            unordered_set<char> digits(iString.begin(), iString.end());

            if (digits.size() == 1 && (digits.find('4') != digits.end() || digits.find('7') != digits.end()) && n % i == 0)
            {
                isAlmostLucky = true;
                break;
            }
            else if (digits.size() <= 2 && (digits.find('4') != digits.end() && digits.find('7') != digits.end()) && n % i == 0)
            {
                isAlmostLucky = true;
                break;
            }
        }
    }

    if (isAlmostLucky)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}