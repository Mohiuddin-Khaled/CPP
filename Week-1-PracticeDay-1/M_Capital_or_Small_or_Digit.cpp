#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (x >= '0' && x <= '9')
    {
        cout << "IS DIGIT";
    }
    else if (x >= 'A' && x <= 'Y' || x >= 'a' && x <= 'z')
    {
        cout << "ALPHA" << endl;
        if (x >= 'A' && x <= 'Z')
        {
            cout << "IS CAPITAL";
        }
        else
        {
            cout << "IS SMALL";
        }
    }
    return 0;
}