#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int cars = 0;
    unordered_map<int, int> freq;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        freq[num]++;
    }

    cars += freq[4];
    cars += freq[3];
    cars += freq[2] / 2;
    freq[1] -= freq[3];
    
    if (freq[2] % 2 == 1)
    {
        cars++;
        freq[1] -= 2;
    }
    if (freq[1] > 0)
    {
        cars += (freq[1] + 3) / 4;
    }

    cout << cars;

    return 0;
}