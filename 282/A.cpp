#include <iostream>
using namespace std;
int main()
{

    int n; 
    int x = 0;
    cin >> n;
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        string statement;
        getline(cin, statement);
        char op = statement[1];

        if(op == '+'){
            x += 1;
        }
        else{
            x -= 1;
        }
    }

    cout << x;

    return 0;
}
