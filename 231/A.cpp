#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++){
        int sureCount = 0;
        int num;
        string line;
        getline(cin, line);

        stringstream ss(line); 

        while(ss >> num){
            if(num == 1){
                sureCount += 1;
            }
        }

        if(sureCount > 1){
            count += 1;
        }

    }

    cout << count;

    return 0;
}