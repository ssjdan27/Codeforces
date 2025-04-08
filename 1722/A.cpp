#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        
        if(n != 5) {
            cout << "NO\n";
            continue;
        }
        
        unordered_map<char, int> name({{'T', 1}, {'i', 1}, {'m', 1}, {'u', 1}, {'r', 1}});
        bool valid = true;
        
        for(char c: s) {
            if(name.find(c) == name.end() || name[c] == 0) {
                valid = false;
                break;
            }
            name[c]--;
        }
        
        for(auto& pair : name) {
            if(pair.second > 0) {
                valid = false;
                break;
            }
        }
        
        cout << (valid ? "YES\n" : "NO\n");
    }
    return 0;
}