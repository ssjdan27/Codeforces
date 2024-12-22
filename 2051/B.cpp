#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n,a,b,c;
        int daysCount = 0;
        int kmsTraveled = 0;
        vector<int> kms(3);
        cin >> n >> a >> b >> c;

        kms[0] = a;
        kms[1] = b;
        kms[2] = c;

        int cycleSum = a + b + c;
        int fullCycles = n / cycleSum;
        int dayCycle = 0;

        if (cycleSum >= n) {
            while (kmsTraveled < n) {
                int traveledToday = kms[dayCycle];
                kmsTraveled += traveledToday;
                dayCycle++;
                dayCycle = dayCycle % 3;
                daysCount++;
            }
        }
        else {
            daysCount += fullCycles * 3;
            kmsTraveled += fullCycles * cycleSum;
            while (kmsTraveled < n) {
                int traveledToday = kms[dayCycle];
                kmsTraveled += traveledToday;
                dayCycle++;
                dayCycle = dayCycle % 3;
                daysCount++;
            }
        }

        cout << daysCount << "\n";
    }
    return 0;
}