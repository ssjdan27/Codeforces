#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string sequence;
    cin >> sequence;
    vector<char> stack;

    for (char c : sequence)
    {
        if (c == ')' && stack.size())
        {
            stack.pop_back();
        }
        else if (c == '(')
        {
            stack.push_back(c);
        }
    }

    cout << stack.size() << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}