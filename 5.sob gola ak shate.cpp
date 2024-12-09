#include <bits/stdc++.h>
using namespace std;
class student
{
  double *age;

public:
  student()
  {
    cout << "inside the default constructor" << endl;
  }
  student(int x)
  {
    cout << "inside the parameterized constructor 1" << endl;
  }
  student(int x, int y)
  {
    cout << "inside the parameterized constructor 2" << endl;
  }

  student(double y)
  {
    age = new double(y);
  }
};
int main()
{

  student asik;
  student mogi(10);
  student atik = 30;
  student anowar(asik);

  return 0;
}
