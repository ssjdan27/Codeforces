#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;

vector<bool> sievePrimes() {
    vector<bool> isPrime(MAX, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i < MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<bool> isPrime = sievePrimes();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        unsigned long long x;
        cin >> x;
        unsigned long long root = sqrt(x);
        if (root * root == x && root > 1 && isPrime[root]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}