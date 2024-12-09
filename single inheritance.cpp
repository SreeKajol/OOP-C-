#include<bits/stdc++.h>
using namespace std;
class worker
{
int age;
char name [10];
public:
void get ( );
void show();
};
void worker :: get ( )
{
 cout<<"enter your name:";
cin >> name;
 cout<<"enter your age:";
cin >> age;
}
void worker::show(){
cout<<"in my name is:"<<name<<endl;
cout<<"in my age is :"<<age<<endl;

}

class manager:public worker{
int now;
public:
void get ( ) ;
void show ( ) ;

};
void manager::get(){


cout<<"enter number of worker under your";
cin>>now;

worker::get();
//cin>>name>>age;
}
void manager:: show(){
worker::show();
cout<<"number of worker under me are: "<<now<<endl;

}
int main(){
manager asik;
asik.get();
asik.show();







}

