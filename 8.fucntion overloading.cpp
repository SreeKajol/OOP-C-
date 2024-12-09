#include <bits/stdc++.h>
using namespace std;
float area(double base, int height)
{
    return 0.5 * base * height;
}
float area(int lenght)
{
    return lenght * lenght;
}
float area(int length, int weight)
{
    return length * weight;
}
int main()
{
    cout << area(5.5, 6) << endl;
    cout << area(5) << endl;
    cout << area(5, 6) << endl;

    return 0;
}
