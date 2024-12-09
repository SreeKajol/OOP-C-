#include <bits/stdc++.h>
using namespace std;
class student
{
    int *age;

public:
    student()
    {
        age = new int;
        *age = 10;
    }
    student(int x)
    {
        age = new int;
        *age = x;
    }
    void display()
    {
        cout << "age is:" << *age << endl;
    }
};
int main()
{
    student asik;
    asik.display();
    int x;
    cin >> x;
    student atik(x);
    atik.display();
}
