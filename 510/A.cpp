#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    bool flip = true;
    for(int i = 0; i < n; i++){
        if(i % 2 == 1) flip = !flip;
        for(int j = 0; j < m; j++){
            if(i % 2 == 0){
                cout << "#";
            }
            else{
                if(!flip && j == m - 1){
                    cout << "#";
                }
                else if (!flip){
                    cout << ".";
                }
                if(flip && j == 0){
                    cout << "#";
                }
                else if (flip){
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}