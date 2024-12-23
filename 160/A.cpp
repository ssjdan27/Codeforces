#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main()
{
    int n;
    int sum = 0;
    int yourCoins = 0;
    cin >> n;
    vector<int> coins(n);

    for(int i = 0; i < n; i++){
        cin >> coins[i];
        sum += coins[i];
    }

    sort(coins.begin(), coins.end(), cmp);

    int i = 0;
    while(yourCoins <= sum){
        yourCoins += coins[i];
        sum -= coins[i];
        i++;
    }

    cout << i;

    return 0;
}