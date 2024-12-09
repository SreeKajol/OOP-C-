#include <bits/stdc++.h>
using namespace std;
template <class T>
void swaP(T &x, T &y)
{
    T t;
    t = x;
    x = y;
    y = t;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swaP(a, b);
    cout << a << " " << b << endl;
    char ch1, ch2;
    cin >> ch1 >> ch2;
    swaP(ch1, ch2);
    cout << ch1 << " " << ch2 << endl;
    double x, y;
    cin >> x >> y;
    swaP(x, y);
    cout << x << " " << y << endl;
    string s1, s2;
    cin >> s1 >> s2;
    swaP(s1, s2);
    cout << s1 << " " << s2 << endl;

    return 0;
}
