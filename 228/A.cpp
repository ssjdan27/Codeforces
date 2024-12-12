#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_set<int> colors;
    for (int i = 0; i < 4; i++) {
        int color;
        cin >> color;
        colors.insert(color);
    }

    cout << 4 - colors.size();
    return 0;
}
