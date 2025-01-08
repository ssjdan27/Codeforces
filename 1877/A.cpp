#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        int sum = 0;
        cin >> n;
        for(int i = 0; i < n - 1; i++){
            int num;
            cin >> num;
            sum += num;
        }

        cout << -sum << "\n";
    }

    return 0;
}