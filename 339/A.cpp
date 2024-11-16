#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string sum;
    vector<string> nums;

    cin >> sum;

    stringstream ss(sum);
    string num;

    while(getline(ss, num, '+')){
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) {
            cout << "+";
        }
    }
    
    return 0;
}