#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[100];
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *kohli = new Cricketer;
    char c[100] = "India";
    strcpy(dhoni->country, c);
    dhoni->jersey_no = 29;
    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->jersey_no << endl;
    cout << kohli->country << endl;
    return 0;
}