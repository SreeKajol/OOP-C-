#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    // p=new int//not initializaton
    p = new int(10); // initialization with 10;
    cin >> *p;
    cout << *p << endl;
    int *arr = new int[10]{1, 2, 4, 9};
    // arr=new int[10] not inttialization
    int n = 3;
    // for(int i=1;i<=n;i++)cin>>arr[i];
    for (int i = 1; i <= n; i++)
        cout << arr[i] << ' ';
    cout << endl;
    for (int i = 1; i <= n; i++)
        cout << *(arr + i) << ' ';

    delete p;
    delete[] arr;
    // for(int i=1;i<=n;i++)cout<<*(arr+i);////arr deleter hoia gese

    return 0;
}
