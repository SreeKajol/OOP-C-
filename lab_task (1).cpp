#include <bits/stdc++.h>
using namespace std;

class shape
{
public:
    virtual void calculate_area() = 0;
};
class triangle : public shape
{
public:
    int base, height;
    float area;
    void get()
    {
        cin >> base >> height;
    }
    void calculate_area()
    {
        area = 0.5 * base * height;
        cout << "area" << area << endl;
    }
};
class square : public shape
{
public:
    int length;
    void get()
    {
        cin >> length;
    }
    float area;
    void calculate_area()
    {
        area = length * length;
        cout << "area" << area << endl;
    }
};

class circle : public shape
{
public:
    int radious;
    void get()
    {
        cin >> radious;
    }
    float area;
    void calculate_area()
    {
        area = 3.1416 * radious * radious;
        cout << "area" << area << endl;
    }
};

int main()
{

    triangle tr;
    tr.get();
    square sq;
    sq.get();
    circle cr;
    cr.get();
    shape *arr[3];
    arr[0] = &tr;
    arr[0]->calculate_area();

    arr[1] = &sq;
    arr[1]->calculate_area();

    arr[2] = &cr;
    arr[2]->calculate_area();

    return 0;
}
