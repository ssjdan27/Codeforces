#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int res = 0;
    cin >> n;
    vector<pair<int, int>> teams;
    for(int i = 0; i < n; i++){
        int home, guest;
        cin >> home >> guest;
        teams.emplace_back(home, guest);
    }

    for(const auto& t: teams){
        for(const auto& o: teams){
            if(o.second == t.first){
                res++;
            }
        }
    }

    cout << res << "\n";

    return 0;
}