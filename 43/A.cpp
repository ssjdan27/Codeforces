#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string team1;
    string team2;
    int score1 = 0;
    int score2 = 0;
    cin >> n;

    while(n--){
        string team;
        cin >> team;
        if(team1.empty() && team2.empty()){
            team1 = team;
        }
        else if(team2.empty() && team != team1){
            team2 = team;
        }

        if(team == team1){
            score1++;
        }
        else{
            score2++;
        }
    }

    if(score1 > score2){
        cout << team1;
    }
    else{
        cout << team2;
    }

    return 0;
}