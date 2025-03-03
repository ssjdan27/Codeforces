#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    int right = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums[i] = num;
        if(num == 2){
            right++;
        }
    }
    int left = 0;
    if(left == right){
        cout << 1 << "\n";
        return;
    }
    for(int i = 0; i < n; i++){
        if(nums[i] == 2){
            left++;
            right--;
        }
        if(left == right){
            cout << i + 1 << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}