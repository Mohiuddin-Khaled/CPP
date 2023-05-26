#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mn = INT_MAX;
        // two's pointer technique
        for (int i = 0; i < n - 1; i++)
        {
            int val;
            for (int j = i + 1; j < n; j++)
            {
                val = a[i] + a[j] + j - i;
                mn = min(mn, val);
            }
        }
        cout << mn;
    }
    return 0;
}