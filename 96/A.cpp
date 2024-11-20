#include <iostream>
using namespace std;
int main()
{
    string positions;
    cin >> positions;

    size_t found0 = positions.find("0000000");
    size_t found1 = positions.find("1111111");
    if(found0 != string::npos || found1 != string::npos){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}