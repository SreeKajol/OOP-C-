#include <bits/stdc++.h>
using namespace std;
void swapping(int &i, int &j)
{
    int t;
    t = i;
    i = j;
    j = t;
}
int main()
{
    int i = 10, j = 19;
    cout << i << "     " << j << endl;
    swapping(i, j);
    cout << i << "     " << j << endl;

    return 0;
}
