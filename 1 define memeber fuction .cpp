#include <bits/stdc++.h>
using namespace std;
class student
{
    int age;
    string name;
    double weight;

public:
    void getdata(int a, double w, string n)
    {
        age = a;
        weight = w;
        name = n;
    }
    void display();
};
void student::display()
{
    cout << age << "  " << weight << "  " << name << endl;
}
int main()
{
    student asik;
    asik.getdata(12, 30.4, "asik");
    asik.display();

    return 0;
}
