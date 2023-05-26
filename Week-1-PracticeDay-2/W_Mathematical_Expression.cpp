#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, ans;
    char s, e;
    cin >> a >> s >> b >> e >> ans;
    switch (s)
    {
    case '+':
        (a + b == ans) ? cout << "Yes" : cout << a + b;
        break;
    case '-':
        (a - b == ans) ? cout << "Yes" : cout << a - b;
        break;
    case '*':
        (a * b == ans) ? cout << "Yes" : cout << a * b;
    }
    return 0;
}