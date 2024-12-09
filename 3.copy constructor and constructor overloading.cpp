#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    float weight;
    string name;
    student()
    {
    }
    student(int x, float y, string s)
    {
        age = x;
        weight = y;
        // strcpy(name,s);
        name = s;
    }
    student(student &asik) // & sara kaj korbe na
    {
        //        age=asik.age+10;
        //        weight=asik.weight+10;
        //        name=asik.name+"oy chong pong";

        cout << "inside the copy constructor" << endl;
    }
    void display()
    {

        cout << "your age is:" << age << endl;
        cout << "your weight is :" << weight << endl;
        cout << "your name is :" << name << endl;
    }
};
int main()
{
    student asik(22, 79, "asik");
    asik.display();
    cout << endl;
    student atik(asik);
    // atik.display();
    // student mogi=student(asik);// eitha kaj kore na
    return 0;
}
