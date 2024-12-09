#include <bits/stdc++.h>
using namespace std;
class test
{
    int code = 0;
    static int count; // static member variable
public:
    void setcode()
    {
        code = ++count;
    }
    void showcode()
    {
        cout << "object member : " << code << endl;
    }
    static void showcount()
    {
        cout << "count=" << count << endl;
    }
};
int test::count = 0;
int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test ::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return (0);
}
