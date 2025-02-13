#include <bits/stdc++.h>
using namespace std;

void solve(){
    int longest = 0;
    int n;
    cin >> n;

    int currBlank = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num == 0){
            currBlank++;
        }
        else{
            longest = max(longest, currBlank);
            currBlank = 0;
        }
    }

    longest = max(longest, currBlank);

    cout << longest << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}