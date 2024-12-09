#include <bits/stdc++.h>
using namespace std;
class complex1
{
    float img, real;

public:
    complex1()
    {
        img = 0, real = 0;
    }
    complex1(float r, float i)
    {
        real = r;
        img = i;
    }
    void show()
    {
        cout << real << " +i" << img << endl;
    }
    complex1 operator+(complex1 t)
    {
        complex1 res;
        res.real = real + t.real;
        res.img = img + t.img;
        return res;
    }
};
int main()
{
    complex1 s(3, 4), t(4, 5), res1, res2;
    res1 = s + t;
    res1.show();
    res2 = s.operator+(t);
    res2.show();

    return 0;
}
