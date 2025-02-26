#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        string line;
        getline(cin, line);
        for(int j = 0; j < m; j++){
            grid[i][j] = line[j];
        }
    }

    int centerRow = 0;
    int centerCol = 0;
    int maxCount = 0;
    int currRow = 0;
    for(auto row: grid){
        int circleCount = count(row.begin(), row.end(), '#');
        if(circleCount > maxCount){
            centerRow = currRow;
            maxCount = circleCount;
        }
        currRow++;
    }

    int firstPos = -1;
    int lastPos = -1;
    int currPos = 0;
    for(auto cell: grid[centerRow]){
        if(cell == '#' && firstPos == -1){
            firstPos = currPos;
        }
        if(cell == '#'){
            lastPos = currPos;
        }
        currPos++;
    }

    cout << centerRow + 1 << " " << (firstPos + lastPos) / 2 + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}