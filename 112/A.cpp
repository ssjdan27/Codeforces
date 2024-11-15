#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
int main()
{

    string one;
    string two;
    int oneVal = 0;
    int twoVal = 0;

    cin >> one;
    cin.ignore();
    cin >> two;

    transform(one.begin(), one.end(), one.begin(), ::tolower);
    transform(two.begin(), two.end(), two.begin(), ::tolower);

    if(one < two){
        cout << "-1";
    }
    else if(two < one){
        cout << "1";
    }
    else{
        cout << "0";
    }

    return 0;
}