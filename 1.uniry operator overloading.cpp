#include <bits/stdc++.h>
using namespace std;
class student
{
    int age;

public:
    void operator++()
    {
        cout << "operator function" << endl;
    }
    void operator-()
    {
        cout << "oerator fuction 1" << endl;
    }
    friend void operator--(student asik);
};
void operator--(student asik)
{
    cout << "operator fuction 2" << endl;
}
int main()
{
    student asik;
    ++asik;
    asik.operator++();
    -asik;
    asik.operator-();
    --asik;
    operator--(asik);

    return 0;
}
