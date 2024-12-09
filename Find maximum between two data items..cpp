#include <bits/stdc++.h>
using namespace std;
template <class T>
void Max(T x, T y)
{
    if (x > y)
        cout << x << " is the largest" << endl;
    else
        cout << y << " is the largerst" << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    Max(a, b);
    char ch1, ch2;
    cin >> ch1 >> ch2;
    Max(ch1, ch2);
    double x, y;
    cin >> x >> y;
    Max(x, y);
    string s1, s2;
    cin >> s1 >> s2;
    Max(s1, s2);

    return 0;
}
