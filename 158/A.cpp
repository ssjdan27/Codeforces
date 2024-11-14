#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int n;
    int k;
    int count = 0;

    cin >> n;
    cin >> k;
    cin.ignore();

    string scores;
    getline(cin, scores);
    stringstream ss(scores);
    vector<int> numbers;
    int number;

    while (ss >> number){
        numbers.push_back(number);
    }

    int value = numbers[k-1];

    for(int i = 0; i < n; i++){
        if(numbers[i] > 0 && numbers[i] >= value){
            count++;
        }
    }

    cout << count;

    return 0;
}