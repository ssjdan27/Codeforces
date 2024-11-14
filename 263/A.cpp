#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
int main()
{
    bool oneFound = false;
    int col = 0;
    int row = 0;

    for(int i = 0; i < 5; i++){
        col = 0;
        string line;
        int num;
        getline(cin, line);

        stringstream ss(line);

        while(ss >> num){
            col++;
            if(num == 1){
                oneFound = true;
                row = i + 1;
                break;
            }
        }
        if(oneFound == true){
            break;
        }
    }

    int rowSwaps = abs(3-row);
    int colSwaps = abs(3 - col);
    cout << (rowSwaps + colSwaps);

    return 0;
}