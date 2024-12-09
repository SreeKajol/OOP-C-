#include <bits/stdc++.h>
using namespace std;
class student
{
public:
   static int age;
   //  static int age=0  ei vabe initialize kora jay na
   int code = 0;
   student()
   {
      code = age;
      age++;
   }
   void display()
   {
      cout << code << "  " << age << endl;
   }
};
int student::age = 0;

int main()
{
   student asik, atik;
   asik.display();
   atik.display();

   return 0;
}
