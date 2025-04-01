#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    bool aliceWinner = false;
    stack<char> st;

    for (char c : s)
    {
        if (st.size() > 0 && st.top() != c)
        {
            aliceWinner = !aliceWinner;
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    cout << (aliceWinner ? "DA\n" : "NET\n");
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