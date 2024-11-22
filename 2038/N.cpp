#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string expression;
        cin >> expression;
        char a = expression[0];
        char comp = expression[1];
        char b = expression[2];

        if (comp == '<')
        {
            if (static_cast<int>(a) < static_cast<int>(b))
            {
                cout << expression << endl;
            }
            else if (static_cast<int>(a) > static_cast<int>(b))
            {
                cout << a << ">" << b << endl;
            }
            else
            {
                cout << a << "=" << b << endl;
            }
        }
        else if (comp == '>')
        {
            if (static_cast<int>(a) > static_cast<int>(b))
            {
                cout << expression << endl;
            }
            else if (static_cast<int>(a) < static_cast<int>(b))
            {
                cout << a << "<" << b << endl;
            }
            else
            {
                cout << a << "=" << b << endl;
            }
        }
        else
        {
            if (static_cast<int>(a) == static_cast<int>(b))
            {
                cout << expression << endl;
            }
            else if (static_cast<int>(a) > static_cast<int>(b))
            {
                cout << a << ">" << b << endl;
            }
            else
            {
                cout << a << "<" << b << endl;
            }
        }
    }
    return 0;
}