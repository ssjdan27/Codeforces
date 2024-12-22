#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    long long xw, xl;
    cin >> n >> m >> a;

    xw = ceil((double)n / a);
    xl = ceil((double)m / a);

    if(a < m && a < n){
        cout << xw * xl;
    }
    else if(a < m){
        cout << xl;
    }
    else{
        cout << xw;
    }

    return 0;
}