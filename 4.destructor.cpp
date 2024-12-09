#include <iostream>
using namespace std;
int count = 0;
class alpha
{
public:
    alpha()
    {
        count++;
        cout << "\n no of object created :" << count << endl;
    }
    ~alpha()
    {
        cout << "\n no of object destroyed :" << count << endl;
        count--;
    }
};
int main()
{
    cout << "\n \n enter main \n:";
    alpha A1, A2, A3, A4;
    {
        cout << "\n enter block 1: \n";
        alpha A5;
    }
    {
        cout << " \n \n enter block2 \n";
        alpha A6;
    }
    cout << "\n re-enter main \n:";
    return (0);
}
