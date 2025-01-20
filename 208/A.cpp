#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string remix;
    cin >> remix;

    string original;
    size_t pos = 0;

    while ((pos = remix.find("WUB")) != string::npos) {
        remix.replace(pos, 3, " ");
    }

    while (!remix.empty() && remix[0] == ' ') {
        remix.erase(0, 1);
    }
    while (!remix.empty() && remix.back() == ' ') {
        remix.pop_back();
    }

    for (char c : remix) {
        if (!(c == ' ' && original.back() == ' ')) {
            original += c;
        }
    }

    cout << original << "\n";

    return 0;
}
