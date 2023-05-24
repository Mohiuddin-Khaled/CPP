#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int mn = min(x, y);
    mn = min(mn, z);
    int mx = max(x, y);
    mx = max(mx, z);
    cout << mn << " " << mx;
    return 0;
}