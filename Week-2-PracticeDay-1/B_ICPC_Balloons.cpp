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
        char a[n];
        cin >> a;
        int cnt[26] = {0};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt[a[i] - 'A'] == 0)
            {
                sum += 2;
                cnt[a[i] - 'A']++;
            }
            else
            {
                sum++;
            }
        }
        cout << sum << endl;
    }

    return 0;
}