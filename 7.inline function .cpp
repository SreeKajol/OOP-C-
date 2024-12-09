#include <bits/stdc++.h>
using namespace std;
inline void Swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}
int main()
{
    int x, y;
    cin >> x >> y;
    Swap(x, y);
    cout << x << " " << y << endl;

    return 0;
}
