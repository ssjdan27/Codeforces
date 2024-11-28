#include <iostream>
using namespace std;
int main()
{
    string n;
    bool valid = true;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }

    string new_str = to_string(count);
    for (int i = 0; i < new_str.length(); i++)
    {
        if (new_str[i] != '4' && new_str[i] != '7')
        {
            valid = false;
        }
    }

    if (valid)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}