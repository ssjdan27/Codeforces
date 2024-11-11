#include <iostream>
#include <string>

using namespace std;

int main()
{
    int weight;
    cin >> weight;
    cin.ignore();

    if (weight <= 3)
    {
        cout << "NO";
    }
    else if (weight % 2 == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}