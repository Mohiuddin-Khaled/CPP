#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool char_check = false;
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (char_check == false)
                cnt++;
            char_check = true;
        }
        else
        {
            char_check = false;
        }
    }
    cout << cnt << endl;
    return 0;
}