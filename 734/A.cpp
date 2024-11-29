#include <iostream>
using namespace std;
int main()
{
    int n;
    int antonWon = 0;
    int danikWon = 0;
    string games;
    cin >> n;
    cin >> games;

    for(int i = 0; i < n; i++){
        if(games[i] == 'A') antonWon++;
        else danikWon++;
    }

    if(antonWon > danikWon) cout << "Anton";
    else if (danikWon > antonWon) cout << "Danik";
    else cout << "Friendship";

    return 0;
}