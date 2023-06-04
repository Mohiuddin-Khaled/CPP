#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool tmakrs(Student a, Student b)
{
    if ((a.eng_marks + a.math_marks) == (b.math_marks + b.eng_marks))
    {
        // ascending
        return a.id < b.id;
    }
    // descending
    return (a.eng_marks + a.math_marks) > (b.math_marks + b.eng_marks);
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }
    // sort the array of object
    sort(a, a + n, tmakrs);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}