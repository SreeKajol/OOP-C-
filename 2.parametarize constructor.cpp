#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    float weight;
    string name;
    student(int x, float y, string s)
    {
        age = x;
        weight = y;
        // strcpy(name,s);
        name = s;
    }
    student(int x)
    {
        cout << "inside the 1 argument consturctor" << endl;
    }
    void display();
};
void student::display()
{

    cout << "your age is:" << age << endl;
    cout << "your weight is :" << weight << endl;
    cout << "your name is :" << name << endl;
}
int main()
{
    int age;
    float weight;
    string name;
    cout << "enter your age ,weight and name " << endl;
    cin >> age >> weight >> name;
    student asik(age, weight, name);
    // student asik=student(age,weight,name);
    asik.display();
    student atik(10);
    student mogi = 10;
    student moga = student(10);

    return 0;
}
