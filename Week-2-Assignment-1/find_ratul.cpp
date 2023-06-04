#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, x;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int flag = 0;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            flag = 1;
        }
    }
    (flag == 1) ? cout << "YES" : cout << "NO";
    return 0;
}