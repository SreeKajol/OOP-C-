#include <bits/stdc++.h>
using namespace std;
class student
{
    int age;
    char name[100];

public:
    student(int x, char *s)
    {
        age = x;
        strcpy(name, s);
    }

    void show()
    {
        cout << "your age is=" << age << endl;
        cout << "your name is =" << name << endl;
    }
};
int main()
{
    int n = 2;
    student asik[2] = {student(10, "asik"), student(20, "atik")};
    student *ptr = asik;
    for (int i = 1; i <= n; i++)
    {
        ptr->show();
        ptr++;
    }

    return 0;
}

//
// #include<bits/stdc++.h>
// using namespace std;
// class student {
// public:
//     int x;
//     student(int y){
//    x=y;
//     }
//
// };
//// int square(student t){
//// return t.x*t.x;
//// }
// int square(student *t){
// return t->x*t->x;
// }
// int square(student &t){
// return t.x*t.x;
// }
// int main(){
//  student asik(10),atik=20,mogi=student(30);
//  cout<<square(asik) <<endl;
//  cout<<square(&atik) <<endl;
//  cout<<square(mogi) <<endl;
//
// return 0;
// }
//
//
