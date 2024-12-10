#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    vector<int> numbers;
    unordered_map<int, int> locations;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int num; 
        cin >> num;
        numbers.push_back(num);
        locations[num] = i;
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << locations[numbers[i]];
    }

    return 0;
}