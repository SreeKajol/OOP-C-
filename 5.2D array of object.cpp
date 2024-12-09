#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    student(int x)
    {
        age = x;
    }
    void set_age(int x)
    {
        age = x;
    }
    void show()
    {
        cout << "your age is " << age << endl;
    }
};
int main()
{
    // student stu[1][2]={10,20}; //// one argument takle
    // student stu[1][2]={student(10),student(39)};////more than one argument takle
    int r = 1, c = 2;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            stu[i][j].show();
    }

    return 0;
}
