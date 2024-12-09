#include <bits/stdc++.h>
using namespace std;
class student
{
    int age;

public:
    student(int a)
    {
        age = a;
    }
    void display()
    {
        cout << age << endl;
    }
    operator int()
    {
        return age;
    }
};
int main()
{
    student asik = 30;
    asik.display();
    int x = asik;
    cout << x << endl;
    x = asik.operator int();
    cout << x << endl;

    return 0;
}
