#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, n;
    cin >> x >> n;
    int i = 2;
    double sum = 0;
    while (i <= n)
    {
        sum += pow(x * 1.0, i * 1.0);
        i += 2;
    }
    cout << (long long int)sum;
    return 0;
}