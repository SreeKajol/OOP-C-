#include <bits/stdc++.h>
using namespace std;
enum week_day
{
   saturday = 1,
   sunday,
   monday,
   tuesday,
   wednesday,
   tursday,
   friday
};
int main()
{

   week_day current_day;
   int day;
   cin >> day;
   current_day = (week_day)day;
   // int x=current_day;
   // cout<<x<<endl;
   if (current_day == friday)
   {
      cout << "not working day" << endl;
   }
   else
   {
      cout << "working day" << endl;
   }

   return 0;
}
