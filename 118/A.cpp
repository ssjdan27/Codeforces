#include <bits/stdc++.h>
using namespace std;
int main()
{
    string phrase;
    string result;
    set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
    cin >> phrase;

    for(char c: phrase){
        if(vowels.find(c) == vowels.end() && isupper(c)){
            result += ".";
            result += tolower(c);
        }

        else if(vowels.find(c) == vowels.end() && !isupper(c)){
            result += ".";
            result += c;
        }
    }

    cout << result;

    return 0;
}