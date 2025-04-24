#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<tuple<int, int, int>> responses;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int words, quality;
        cin >> words >> quality;
        responses.push_back({quality, words, i});
    }

    sort(responses.begin(), responses.end(), greater<>());

    bool found = false;
    int i = 0;
    int res = -1;
    while(!found){
        if(get<1>(responses[i]) < 11){
            res = get<2>(responses[i]) + 1;
            found = true;
        }
        i++;
    }

    cout << res << "\n";
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