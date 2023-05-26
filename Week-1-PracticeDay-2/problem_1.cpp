#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char *n, int r, char s, int m, int c)
    {
        strcpy(name, n);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};
int main()
{
    char r[100] = "Karim";
    char k[100] = "karim";
    char a[100] = "abul";
    Student s1(r, 1, 'A', 90, 8);
    Student s2(k, 2, 'A', 91, 8);
    Student s3(a, 3, 'A', 95, 8);
    if (s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks)
    {
        cout << s1.name << endl;
    }
    else if (s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks)
    {
        cout << s2.name << endl;
    }
    else
    {
        cout << s3.name << endl;
    }
    return 0;
}