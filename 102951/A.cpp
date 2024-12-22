#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int maxDistance = -1;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for(int &xval : x){
        cin >> xval;
    }

    for(int &yval : y){
        cin >> yval;
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];

            int distance = dx * dx + dy * dy;
            maxDistance = max(maxDistance, distance);
        }
    }

    cout << maxDistance;


    return 0;
}