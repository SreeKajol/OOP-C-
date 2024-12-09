#include <bits/stdc++.h>
using namespace std;
template <class T>
class arr
{
public:
    int n;
    T *a;
    void get_data()
    {
        cout << "enter n:";
        cin >> n;
        a = new T[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }
    void display()
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    void sorT()
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    T t;
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
    }
};
int main()
{
    arr<int> asik;
    asik.get_data();
    asik.sorT();
    asik.display();

    arr<char> atik;
    atik.get_data();
    atik.sorT();
    atik.display();

    arr<float> mogi;
    mogi.get_data();
    mogi.sorT();
    mogi.display();

    return 0;
}
