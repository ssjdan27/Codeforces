#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int upper = 0;
    int lower = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else if (upper < lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s;

    return 0;
}
