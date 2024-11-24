#include <iostream>
using namespace std;
int main()
{
    int x;
    int steps = 0;
    cin >> x;

    while (x > 0)
    {
        if (x - 5 >= 0)
        {
            x -= 5;
            steps++;
        }
        else if (x - 4 >= 0)
        {
            x -= 4;
            steps++;
        }
        else if (x - 3 >= 0)
        {
            x -= 3;
            steps++;
        }
        else if (x - 2 >= 0)
        {
            x -= 2;
            steps++;
        }
        else{
            x--;
            steps++;
        }
    }

    cout << steps;

    return 0;
}