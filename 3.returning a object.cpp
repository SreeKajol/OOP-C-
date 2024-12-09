#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    void print()
    {

        cout << "insede the class" << endl;
    }
};
student &display()
{
    student asik;
    return asik;
}
int main()
{
    student &mogi = display();
    mogi.print();

    return 0;
}
