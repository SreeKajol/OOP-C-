#include <bits/stdc++.h>
using namespace std;
int x;
int &f()
{

    return x;
}
int main()
{
    x = 10;
    int &t = f();
    t = x;
    cout << t << endl;
    // f()=100;
    // cout<<x<<endl;

    return 0;
}
