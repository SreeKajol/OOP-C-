#include <bits/stdc++.h>
using namespace std;
int x;
int &f()
{
    return x;
}
int main()
{
    f() = 100;
    cout << x << endl;
    x = 200;
    cout << x << endl;
    f() = 300;
    cout << x << endl;

    return 0;
}
