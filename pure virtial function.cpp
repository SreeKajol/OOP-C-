#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void show() = 0; // we can not create a object of this(abstruct) class;
};
class deriv1 : public base
{
public:
    void show()
    {
        cout << "derived class 1" << endl;
    }
};
class deriv2 : public base
{
public:
    void show()
    {
        cout << "derived class 2" << endl;
    }
};
int main()
{
    // base *ptr;
    // deriv1 dv1;
    // ptr=&dv1;
    // ptr->show();
    // deriv2 dv2;
    // ptr=&dv2;
    // ptr->show();

    base *ptr[2];
    deriv1 dv1;
    deriv2 dv2;
    ptr[0] = &dv1;
    ptr[0]->show();
    ptr[1] = &dv2;
    ptr[1]->show();

    return 0;
}
