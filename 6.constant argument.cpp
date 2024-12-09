#include <bits/stdc++.h>
using namespace std;
void Swap(int &x, const int y = 90) // call korar maddome y er man change korte parmo but function er vitore parmo na
{
    int t = x;
    x = y;
}
int main()
{
    int x, y;
    cin >> x >> y;
    Swap(x);
    cout << x << ' ' << y << endl;
}
