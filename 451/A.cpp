#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    bool isAkshat = true;
    while(n > 0 || m > 0){
        --n;
        --m;
        if(n > 0 && m > 0) isAkshat = !isAkshat;
    }

    cout << (isAkshat ? "Akshat" : "Malvika");

    return 0;
}