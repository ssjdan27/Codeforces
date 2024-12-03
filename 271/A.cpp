#include <iostream>
#include <set>
using namespace std;
int main()
{
    int y;
    bool found = false;
    cin >> y;

    while (!found)
    {
        y++;
        string yStr = to_string(y);
        set<char> uniqueDigits;
        for (char c : yStr)
        {
            uniqueDigits.insert(c);
        }
        if (uniqueDigits.size() == 4)
            found = true;
    }

    cout << y;

    return 0;
}