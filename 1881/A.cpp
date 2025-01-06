#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        bool found = false;
        string x, s;
        cin >> n >> m >> x >> s;
        
        for(int i = 0; i < 6; i++){
            if(x.find(s) == string::npos){
                x += x;
            }
            else{
                found = true;
                cout << i << "\n";
                break;
            }
        }

        if(!found){
            cout << -1 << "\n";
        }

    }

    return 0;
}