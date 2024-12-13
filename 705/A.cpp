#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string phrase;
    cin >> n;

    if (n == 1) {
        cout << "I hate it";
    }
    else {
        for (int i = 1; i < n; i++) {
            if (i % 2 == 1) {
                phrase += "I hate that ";
            }
            else {
                phrase += "I love that ";
            }
        }

        if (n % 2 == 0) {
            phrase += "I love it";
        }
        else {
            phrase += "I hate it";
        }
    }


    cout << phrase;
    return 0;
}
