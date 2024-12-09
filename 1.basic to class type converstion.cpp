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
};
int main()
{
    student asik = 30;
    asik.display();

    return 0;
}
