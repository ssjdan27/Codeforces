#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int totalSeated;
    cin >> t;

    for (int i = 0; i < t; i++) {
        totalSeated = 0;
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int totalSeats = 2*m;
        if (a <= m) {
            totalSeated += a;
            totalSeats -= a;
        }
        else {
            totalSeated += m;
            totalSeats -= m;
        }
        if (b <= m) {
            totalSeated += b;
            totalSeats -= b;
        }
        else {
            totalSeated += m;
            totalSeats -= m;
        }

        if (c <= totalSeats) {
            totalSeated += c;
            totalSeats -= c;
        }
        else {
            totalSeated += totalSeats;
            totalSeats = 0;
        }

        cout << totalSeated << "\n";

    }
    return 0;
}