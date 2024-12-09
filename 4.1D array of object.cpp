#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    student()
    {
    }
    student(int x, int y)
    {
        age = x + y;
    }
    student(int x)
    {
        age = x;
    }

    set_age(int x)
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

    // student stu[4]={1,2,3,4};  ////one argument takle
    // student stu[4]={student(1,3),student(3,4),student(4,5),student(5,6)}; ////more than one argument
    student stu[4] = {student(1), student(3), student(4), student(5)};

    for (int i = 0; i < 4; i++)
    {
        stu[i].show();
    }

    // user set the value
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        stu[i].set_age(x);
    }
    for (int i = 0; i < 4; i++)
    {
        stu[i].show();
    }

    return 0;
}
