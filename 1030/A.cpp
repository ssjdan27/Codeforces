#include <iostream>
using namespace std;
int main()
{
    int n;
    int easyCount = 0;
    int hardCount = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int opinion;
        cin >> opinion;
        if (opinion == 0)
            easyCount++;
        else
            hardCount++;
    }

    if (hardCount == 0)
        cout << "EASY";
    else
        cout << "HARD";

    return 0;
}