#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int totalCookies = 0;
    int waysToSteal = 0;
    vector<int> cookieBags;
    cin >> n;

    for(int i = 0; i < n; i++){
        int cookies;
        cin >> cookies;
        totalCookies += cookies;
        cookieBags.push_back(cookies);
    }

    for(int cookie : cookieBags){
        if((totalCookies - cookie) % 2 == 0){
            waysToSteal++;
        }
    }

    cout << waysToSteal;
    return 0;
}