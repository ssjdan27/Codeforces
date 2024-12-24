#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    double d;
    cin >> n >> l;
    vector<int> lights(n);

    for(int i = 0; i < n; i++){
        cin >> lights[i];
    }

    sort(lights.begin(), lights.end());

    double biggestDifference = max(lights[0] - 0, l - lights.back());

    for(int i = 0; i < n - 1; i++){
        biggestDifference = max(biggestDifference, abs((double)(lights[i] - lights[i+1]) / 2));
    }

    if(biggestDifference == lights[0] - 0 ){
        cout << lights[0] - 0;
    }
    else if(biggestDifference == l - lights.back()){
        cout << l - lights.back();
    }
    else{
        cout << setprecision(9) << biggestDifference;
    }

    return 0;
}