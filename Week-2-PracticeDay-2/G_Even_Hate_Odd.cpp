#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ecnt = 0, ocnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                ecnt++;
            else
                ocnt++;
        }
        // cout << ecnt << " " << ocnt << endl;
        if (ecnt == ocnt)
        {
            cout << "0" << endl;
        }
        else if (ecnt > ocnt && ((ecnt - ocnt) % 2 == 0))
        {
            cout << (ecnt - ocnt) / 2 << endl;
        }
        else if (ocnt > ecnt && ((ecnt - ocnt) % 2 == 0))
        {
            cout << (ocnt - ecnt) / 2 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}