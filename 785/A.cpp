#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int res = 0;
    cin >> n;
    unordered_map<string, int> mp = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        res += mp[s];
    }
    cout << res << "\n";
    return 0;
}