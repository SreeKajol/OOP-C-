#include <bits/stdc++.h>
using namespace std;
class student
{
public:
   int x = 10;
   int get() { return x; }
};
int squre(student asik)
{
   // return asik.x*asik.x;
   return asik.get() * asik.get();
}
int main()
{
   student asik;
   int sq = squre(asik);
   cout << sq << endl;

   return 0;
}
