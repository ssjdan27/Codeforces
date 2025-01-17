#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string code;
    cin >> code;

    if(code.find("H") != string::npos || code.find("Q") != string::npos || code.find("9") != string::npos){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}