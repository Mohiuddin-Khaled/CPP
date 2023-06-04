#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < s.size() / 2; i++)
        {
            int a = s[i] - 48;
            sum1 += a;
        }
        for (int i = s.size() / 2; i < s.size(); i++)
        {
            int b = s[i] - 48;
            sum2 += b;
        }
        (sum1 == sum2) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}