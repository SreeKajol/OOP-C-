#include <bits/stdc++.h>
using namespace std;
class time
{
    int minutes, hours;

public:
    time() {}
    time(int t)
    {
        hours = t / 60;
        minutes = t % 60;
    }
    void display()
    {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};
int main()
{

    class time T; // time ei word a vejal
    int period = 160;
    T = period;
    T.display();

    return 0;
}
