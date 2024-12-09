#include<bits/stdc++.h>
using namespace std;
int co=0;
class student
{
public:
    int age=0;
    student ()
    {
        co++;
        cout<<"no of object  is createrd "<<co<<endl;
    }

    ~student()
    {
        cout<<"no of object is destoryed  "<<co<<endl;
        co--;
    }
};
int main()
{

    student asik,atik,mogi,shofikul;
    cout<<"azke office a jamo na"<<endl;
    asik.age=50;
    cout<<asik.age<<endl;
 // auto matically destory call

    return 0;
}
