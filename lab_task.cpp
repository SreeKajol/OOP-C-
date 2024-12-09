#include <bits/stdc++.h>
using namespace std;

void func(int a, int b)
{
  int si;
  try
  {
    if (b == 0)
      throw 0;
    else
      si = a / b;
    cout << "asiK" << endl; // b==0 mane throw hoia gele eita and nicher code gola r execute hoeb na

    int arr[si];
    int ad_in, element, de_in;
    cout << "enter adding element:";
    cin >> element;
    cout << "enter add index :";
    cin >> ad_in;
    if (ad_in > si)
      throw 1.4;
    else
      arr[ad_in] = element;

    cout << "enter delete index:";
    cin >> de_in;
    if (de_in < 0)
      throw 1.2;
    else
      arr[de_in] = -100;
  }
  catch (int x)
  {
    cout << "b can not be zero" << endl;
  }
  catch (double y)
  {
    cout << "index is invalid" << endl;
  }
  cout << "atik" << endl;
  // for(int i=0;i<si;i++)cout<<arr[i]<<" ";
}
int main()
{

  int a, b;
  cin >> a >> b;
  func(a, b);

  return 0;
}
