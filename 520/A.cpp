#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string word;
    unordered_set<char> letters;
    cin >> n;
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), [](unsigned char c)
              { return tolower(c); });
    for (int i = 0; i < n; i++)
    {
        letters.insert(word[i]);
    }

    if (letters.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}