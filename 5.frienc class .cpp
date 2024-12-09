#include <bits/stdc++.h>
using namespace std;
// class student2; // na dile o hobe
class student1
{
   int age = 23;
   float weight = 69.12;
   friend class student2;
};
class student2
{
public:
   void display1(student1 &asik)
   {
      cout << "your age is " << asik.age << endl;
      cout << "your weight is :" << asik.weight << endl;
      //   student1 mogi;
      //   cin>>mogi.age;
   }
   void display2(student1 &asik);
};
void student2::display2(student1 &asik)
{
   cout << "your age is " << asik.age + 10 << endl;
   cout << "your weight is :" << asik.weight + 10 << endl;
}

int main()
{
   student1 asik;
   student2 atik;
   atik.display1(asik);
   atik.display2(asik);

   return 0;
}
