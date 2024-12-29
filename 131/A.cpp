#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    bool caps = true;
    cin >> word;

    for (int i = 1; i < word.length(); i++)
    {
        if (!isupper(word[i]))
        {
            caps = false;
            break;
        }
    }

    if (caps)
    {
        string result;
        for (int i = 0; i < word.length(); i++)
        {
            result += (isupper(word[i])) ? tolower(word[i]) : toupper(word[i]);
        }
        cout << result;
    }
    else
    {
        cout << word;
    }

    return 0;
}