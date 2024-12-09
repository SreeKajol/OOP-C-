#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int x;
    student(int y)
    {
        x = y;
    }
};
// int square(student t){
// return t.x*t.x;
// }
int square(student *t)
{
    return t->x * t->x;
}
int square(student &t)
{
    return t.x * t.x;
}
int main()
{
    student asik(10), atik = 20, mogi = student(30);
    cout << square(asik) << endl;
    cout << square(&atik) << endl;
    cout << square(mogi) << endl;

    return 0;
}
