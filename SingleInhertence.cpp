#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;

    void setData();
    int getData1();
    int getData2();
};

void base ::setData(void)
{
    int a, b;
    cin >> a >> b;
    data1 = a;
    data2 = b;
}
int base :: getData1(){
    return data1;
}
int base :: getData2(){
    return data2;
}

class derived : public base
{
public:
    int data3;
    void set(){
        setData();
    }
    void proces();
    void display();

};

void derived :: proces() {
    data3= data2* getData1();
}
void derived :: display(){
    cout<<"The value of data1 = "<<getData1()<<"\n";
    cout<<"The value of data2 = "<<data2<<"\n";
    cout<<"The value of data3 = "<<data3<<"\n";
}

int main()
{
    derived obj;
    obj.set();
    obj.proces();
    obj.display();

    return 0;
}