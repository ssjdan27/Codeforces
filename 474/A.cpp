#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string layout = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    string message;
    cin >> dir >> message;
    unordered_map<char, pair<char, char>> translate;
    for(int i = 1; i < layout.length() - 1; i++){
        translate[layout[i]] = {layout[i+1], layout[i-1]};
    }
    translate[layout[0]] = {layout[1], layout[0]};
    translate[layout[layout.length()-1]] = {layout.back(), layout[layout.length()-2] };

    string realMessage;
    for(char c: message){
        realMessage += (dir == 'L' ? translate[c].first : translate[c].second);
    }

    cout << realMessage;

    return 0;
}