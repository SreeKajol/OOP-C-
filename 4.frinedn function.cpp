#include <bits/stdc++.h>
using namespace std;
class student
{
    int age;
    friend int main();
    friend void getdata(student &asik);
    //{
    // cout<<"enter your age";
    // cin>>asik.age;
    //}
public:
    void display()
    {
        cout << "your age is :" << age << endl;
    }
};
void getdata(student &asik)
{ // & sara hobe na
    cout << "enter your age";
    cin >> asik.age;
    // cout<<asik.age<<endl;
}
int main()
{
    student asik;
    getdata(asik);
    asik.display();
    cout << asik.age << endl;
    return 0;
}
