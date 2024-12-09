#include <bits/stdc++.h>
using namespace std;
class student1
{
    int age1, weight1;

public:
    student1(int age1, int weight1)
    {
        this->age1 = age1;
        this->weight1 = weight1;
    }
    void show()
    {
        cout << age1 << "   " << weight1 << endl;
    }
};
class student2
{
    int age2, weight2;

public:
    student2(int age2, int weight2)
    {
        this->age2 = age2;
        this->weight2 = weight2;
    }
    void show()
    {
        cout << age2 << "   " << weight2 << endl;
    }
    operator student1()
    {
        student1 asik(5, 6);
        return asik;
    }
};
int main()
{
    student1 asik(10, 20);
    student2 atik(30, 40);
    asik = atik;
    asik.show();
    asik = atik.operator student1();
    asik.show();
}
