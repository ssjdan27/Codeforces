#include <iostream>
#include <set>
using namespace std;
int main()
{
    string username;
    set<char> distinctChar;
    cin >> username;

    for (char c : username)
    {
        distinctChar.insert(c);
    }

    if (distinctChar.size() % 2 == 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }

    return 0;
}