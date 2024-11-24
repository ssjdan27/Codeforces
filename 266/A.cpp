#include <iostream>
using namespace std;
int main()
{
    int n; 
    int count = 0;
    int l = 0;
    int r = 1;
    string stones;
    cin >> n;
    cin >> stones;

    while(r < stones.length()){
        if(stones[l] == stones[r]){
            count++;
            r++;
        }
        else{
            l = r;
            r = l + 1;
        }
    }

    cout << count;

    return 0;
}