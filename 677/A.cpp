#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int totalWidth = 0;
    int n, h;
    cin >> n >> h;
    cin.ignore();
    string friends;
    int oneFriend;

    getline(cin, friends);
    stringstream ss(friends);

    while (ss >> oneFriend)
    {
        if (oneFriend > h)
            totalWidth += 2;
        else
            totalWidth++;
    }

    cout << totalWidth;

    return 0;
}