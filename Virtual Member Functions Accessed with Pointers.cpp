#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "base class" << endl;
    }
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
    base *ptr;
    ;
    deriv1 dv1;
    ptr = &dv1;
    ptr->show();
    deriv2 dv2;
    ptr = &dv2;
    ptr->show();

    return 0;
}
