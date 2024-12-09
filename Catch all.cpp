#include <bits/stdc++.h>
using namespace std;
void test(int x)
{

    try
    {
        if (x == 1)
            throw 1;
        else if (x == -1)
            throw 3.4;
        else if (x == 0)
            throw 's';
    }
    catch (...)
    {
        cout << "getting an error" << endl;
    }
}
int main()
{
    test(1);
    test(0);
    test(-1);

    return 0;
}
