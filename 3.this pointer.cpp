#include<bits/stdc++.h>
using namespace std;
class student{
int age;
public:
student(int age);
void show(){
cout<<age<<endl;
}

};
student::student(int age){
this->age=age;
}
int main(){
    student asik=10;
    student atik={10};
    student mogi={student(10)};
    asik.show();
    atik.show();
    mogi.show();







return 0;}

