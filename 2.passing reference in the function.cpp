#include <bits/stdc++.h>
using namespace std;
class myclass
{
    int who;

public:
    myclass(int i)
    {
        who = i;
        cout << "Constructing " << who << "\n";
    }
    ~myclass()
    {
        cout << "Destructing " << who << "\n";
    }
    int id() { return who; }
};
void f(myclass &x)
{
    cout << x.id() << endl;
}
int main()
{
    myclass x(1);
    f(x);

    return 0;
}
