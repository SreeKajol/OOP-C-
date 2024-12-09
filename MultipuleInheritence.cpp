#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;
public:
    void set_base1int(int a){
        base1int= a;
    }
};
class Base2
{
protected:
    int base2int;
public:
    void set_base2int(int a){
        base2int= a;
    }
};

class Derived : public Base1, public Base2{
    public:
    void show(){
        cout<<"The sum of value existing two Base class: "<<base1int + base2int<<"\n";
    }
};

int main()
{
    Derived obj;
    obj.set_base1int(10);
    obj.set_base2int(20);
    obj.show();
    return 0;
}
