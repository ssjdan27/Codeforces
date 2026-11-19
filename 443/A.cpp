#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    for(char &c: s)
        if(c == '{' || c == '}' || c == ',') c = ' ';
    stringstream ss(s);
    unordered_set<string> v;
    for(string t; ss >> t; ) v.insert(t);
    cout << v.size() << "\n";
    return 0;
}