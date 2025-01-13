#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    if(c % 2 == 1){
        // katie's turn
        if(b > a){
            cout << "Second\n";
        }
        else{
            cout << "First\n";
        }
    }
    else{
        // anna's turn
        if(b >= a){
            cout << "Second\n";
        }
        else{
            cout << "First\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}