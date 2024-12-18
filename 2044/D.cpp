#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);       
        set<int> unusedValues;    
        map<int, int> freq;       

        for (int i = 1; i <= n; i++) {
            unusedValues.insert(i);
        }

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (unusedValues.count(a[i])) {
                unusedValues.erase(a[i]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (freq[a[i]] == 0) { 
                cout << a[i] << " ";
                freq[a[i]]++;
            } else {
                int nextVal = *unusedValues.begin();
                cout << nextVal << " ";
                unusedValues.erase(nextVal);
            }
        }

        cout << "\n";
    }

    return 0;
}
