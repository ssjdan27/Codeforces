#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int currentSum = 0;
    for(int i = 0; i < k; i++) {
        currentSum += nums[i];
    }
    
    int minSum = currentSum;
    int minIndex = 0;

    for(int i = k; i < n; i++) {
        currentSum = currentSum - nums[i-k] + nums[i];
        if(currentSum < minSum) {
            minSum = currentSum;
            minIndex = i - k + 1;
        }
    }

    cout << minIndex + 1 << "\n";

    return 0;
}