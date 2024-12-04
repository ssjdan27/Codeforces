#include <iostream>
using namespace std;
int main()
{
    int n, t;
    string queue;
    cin >> n >> t;
    cin >> queue;

    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (queue[j - 1] == 'B' && queue[j] == 'G')
            {
                queue[j - 1] = 'G';
                queue[j] = 'B';
                j++;
            }
        }
    }

    cout << queue;
    return 0;
}