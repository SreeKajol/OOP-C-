#include <bits/stdc++.h>
using namespace std;
class student
{
    int age;
    char name[100];

public:
    student(int x, char *s)
    {
        age = x;
        strcpy(name, s);
    }

    void show()
    {
        cout << "your age is=" << age << endl;
        cout << "your name is =" << name << endl;
    }
};
int main()
{
    student asik(10, "asik");
    // student asik;
    student *ptr;
    ptr = &asik;
    ptr->show();
    // asik.show();

    return 0;
}
