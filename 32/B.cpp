#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string temp;
    string res;
    cin >> s;
    for(char c: s){
        temp += c;
        if(temp == "."){
            res += "0";
            temp = "";
        }
        else if(temp == "-."){
            res += "1";
            temp = "";
        }
        else if(temp == "--"){
            res += "2";
            temp = "";
        }
    }

    cout << res << "\n";

    return 0;
}