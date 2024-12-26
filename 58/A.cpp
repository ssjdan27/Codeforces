#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool saidHello = false;
    string phrase;
    char letters[] = {'h', 'e', 'l', 'l', 'o'};

    cin >> phrase;

    int currPointer = 0;
    for (char c : phrase)
    {
        if(currPointer == 5){
            break;
        }

        if (c == letters[currPointer])
        {
            currPointer++;
        }
    }

    if (currPointer == 5)
    {
        saidHello = true;
    }


    if (saidHello)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}