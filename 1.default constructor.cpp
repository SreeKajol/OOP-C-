#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    float weight;
    student();
    void display()
    {
        cout << "age is :" << age << endl;
        cout << "weight is:" << weight << endl;
    }
};
student::student()
{
    cout << "enter your age and weight:";
    cin >> age >> weight;
}
int main()
{
    student asik;
    student atik = student();
    atik.display();
    asik.display();

    return 0;
}
